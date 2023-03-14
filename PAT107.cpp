#include<iostream>
using namespace std;


int main()
{
    int m, n, MAX = -1;
    cin >> n >> m;

    ///分成 i 组
    for (int i = 0; i < n; i++){
        int M = -1, val;
        for (int j = 0; j < m; j++){
            cin >> val;
            if (val > M) M = val;
        }
        if (i != 0) cout << " ";
        cout << M;
        MAX = max(MAX, M);
    }
    cout << endl << MAX << endl;

    return 0;
}