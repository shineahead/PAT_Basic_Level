//
// Created by shineahead on 2022-10-08.
//
#include<iostream>
#include<cmath>
using namespace std;
////题干中没有说明N1/M1 和 N2/M2的大小，容易认为N1/M1小于 N2/M2，但可能有N1/M1大于 N2/M2

bool func(int a1, int b1, int a2, int b2)
{
    double d1 = double(a1) / double(b1);
    double d2 = double(a2) / double(b2);
    return d2 > d1;
}
//求a与b的最大公约数
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b,a % b);
}
//求a,b,c的最小公倍数
int lcm(int a, int b, int c)
{
    int m1 = a / gcd(a, b) * b;
    int m2 = b / gcd(b, c) * c;
    return m1 / gcd(m1, m2) * m2;
}
int main()
{
    int n1, n2, m1, m2, k;
    scanf("%d/%d", &n1, &m1);
    scanf("%d/%d", &n2, &m2);
    cin >> k;
    if (!func(n1, m1, n2, m2))
    {
        swap(n1, n2);
        swap(m1, m2);
    }
    int flag = 0;
    for (int i = 1; i < k; i++)
    {
        if (func(n1, m1, i, k) && func(i, k, n2, m2) && gcd(i, k) == 1)
        {
            flag++;
            if (flag != 1)
                printf(" %d/%d", i, k);
            else
                printf("%d/%d", i, k);
        }
    }
    cout << endl;
    return 0;
}