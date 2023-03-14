//
// Created by shineahead on 2022-10-05.
//
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, d, empty = 0, possibility = 0;
    double e;
    cin >> n >> e >> d;
    for (int i = 0; i < n; i++)
    {
        int day, less_e = 0; cin >> day;
        for (int j = 0; j < day; j++)
        {
            double a; cin >> a;
            if (a < e)
                less_e++;
        }
        if (less_e > day / 2 && day > d)
            empty++;
        if (less_e > day / 2 && day <= d)
            possibility++;
    }
    printf("%.1f%% %.1f%%", possibility * 100.0 / n, empty * 100.0 / n);
    return 0;
}
