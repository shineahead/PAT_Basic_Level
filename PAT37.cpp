//
// Created by shineahead on 2022-09-29.
//
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[80], s2[80], *token, sep[2] = ".";
    cin >> s1 >> s2;
    int Galleon_P, Sickle_P, Knut_P, Galleon_A, Sickle_A, Knut_A;
    //用strtok函数来分割字符串
    token = strtok(s1, sep);
    Galleon_P = stoi(token);
    token = strtok(NULL, sep);
    Sickle_P = stoi(token);
    token = strtok(NULL, sep);
    Knut_P = stoi(token);

    token = strtok(s2, sep);
    Galleon_A = stoi(token);
    token = strtok(NULL, sep);
    Sickle_A = stoi(token);
    token = strtok(NULL, sep);
    Knut_A = stoi(token);

    int sum1 = 0, sum2 = 0, gap = 0,resA, resB, resC;
    bool f = true;

    sum1 = Galleon_P*17*29 + Sickle_P*29 + Knut_P;
    sum2 = Galleon_A*17*29 + Sickle_A*29 + Knut_A;
    if (sum2 < sum1)
        f = false;
    gap = abs(sum2 - sum1);

    resA = gap / (17 * 29);
    gap = gap % (17 * 29);
    resB = gap / 29;
    gap = gap % 29;
    resC = gap;

    if (!f)
        printf("-%d.%d.%d", resA, resB, resC);
    else
        printf("%d.%d.%d", resA, resB, resC);

    return 0;
}