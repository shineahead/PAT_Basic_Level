//
// Created by shineahead on 2022-10-15.
//
#include<iostream>
using namespace std;
int da[501];

int main()
{
    int m, n, a, b, replace;
    cin >> m >> n >> a >> b >> replace;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> da[j];
        for (int j = 0; j < n; j++)
        {
            if (j != 0) cout << " ";
            if (da[j] >= a && da[j] <= b)
                printf("%03d", replace);
            else
                printf("%03d", da[j]);
        }
        cout << endl;
    }

    return 0;
}