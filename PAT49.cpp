//
// Created by shineahead on 2022-10-03.
//
#include<iostream>
#include<algorithm>
using namespace std;
double a[100001];

int main()
{
    int n; cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        //找出规律：sum=0.1∗1∗4+0.2∗2∗3+0.3∗3∗2+0.4∗4∗1
        sum += (long long )(1000*a[i]) * (n - i) * (i + 1);

    printf("%.2lf", sum / 1000.0);
    return 0;
}