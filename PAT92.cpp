#include<iostream>
using namespace std;
int m, n, Max = 0;

int main()
{
    cin >> n >> m;
    int pancake[n + 1];
    ///初始化
    for (int k = 1; k <= n; k++)
        pancake[k] = 0;
    for (int i = 0; i < m; i++){
        for (int j = 1; j <= n; j++){
            int t; cin >> t;
            pancake[j] += t;
        }
    }
    for (int i = 1; i <= n; i++)
        if (pancake[i] > Max)
            Max = pancake[i];

    cout << Max << endl;
    bool f = true;
    for (int i = 1; i <= n; i++){
        if (pancake[i] == Max){
            if (f){
                f = false;
                cout << i;
            }
            else cout << " " << i;
        }
    }

    return 0;
}