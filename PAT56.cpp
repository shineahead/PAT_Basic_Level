//
// Created by shineahead on 2022-10-06.
//
#include<iostream>
using namespace std;
int mark[300], a[50];

int main()
{
    int sum = 0, n; cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                int res = temp * 10 + a[j];
                if (mark[res] != 1)
                {
                    sum += res;
                    mark[res] = 1;
                }
            }
        }
    }
    cout << sum << endl;

    return 0;
}
