//
// Created by shineahead on 2022-10-09.
//
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n; cin >> n;
    double Max = -1;
    for (int i = 0; i < n; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        double sum = sqrt(pow(t1, 2) + pow(t2, 2));
        if (sum > Max)
            swap(sum, Max);
    }
    printf("%.2lf", Max);
    return 0;
}