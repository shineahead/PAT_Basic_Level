//
// Created by shineahead on 2022-10-04.
//
#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    double r1, r2, p1, p2, a1, b1, a2, b2;
    cin >> r1 >> p1 >> r2 >> p2;

    a1 = r1 * cos(p1);
    b1 = r1 * sin(p1);
    a2 = r2 * cos(p2);
    b2 = r2 * sin(p2);

    double res1, res2;
    res1 = a1 * a2 - (b1 * b2);
    res2 = a1 * b2 + a2 * b1;

    if (fabs(res1) < 0.005)
        printf("0.00");
    else
        printf("%.2f", res1);
    if (fabs(res2) < 0.005)
        printf("+0.00i");
    else if (res2 < 0)
        printf("%.2fi", res2);
    else
        printf("+%.2fi", res2);

    return 0;
}