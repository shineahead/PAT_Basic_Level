//
// Created by shineahead on 2022-09-13.
//
#include<iostream>
#define CLK_TCK 100;
using namespace std;


int main()
{
    int c1, c2, hour, minute, second, gap;

    cin >> c1 >> c2;
    //这里要进行四舍五入处理
    gap = c2 - c1 + 50;
    gap /= CLK_TCK;
    hour = gap / 3600;
    gap %= 3600;
    minute = gap / 60;
    gap %= 60;
    second = gap % 60;


    printf("%02d:%02d:%02d", hour, minute, second);

    return 0;
}