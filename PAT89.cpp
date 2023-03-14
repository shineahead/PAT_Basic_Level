#include<iostream>
using namespace std;

int main()
{
    int n, v[101]; cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++){
        for (int j = i + 1; j <= n; j++){
            int lier = 0, wolf = 0;
            for (int k = 1; k <= n; k++){
                if((abs(v[k]) == i || abs(v[k]) == j) ^ (v[k] < 0)) { ///满足表达式为说谎
                    ++lier;    ///说谎的玩家是狼
                    if(k == i || k == j)
                        ++wolf;
                }
            }
            if (lier == 2 && wolf == 1){
                cout << i << " " << j;
                return 0;
            }
        }
    }
    cout << "No Solution" << endl;
    return 0;
}