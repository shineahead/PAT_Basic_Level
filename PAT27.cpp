//
// Created by shineahead on 2022-09-13.
//
#include<iostream>
using namespace std;

int main()
{
    int N, add = 1, count = 0;
    char c;
    cin >> N >> c;
    //表示最少那一行需要一个字符,count用来记录输出的行数,只记录
    N -= add;
    count++;
    add += 2;

    while (N > 2*add)
    {
        N -= add * 2;
        count++;
        add += 2;
    }

    for (int i = count; i >= 1; i--)
    {
        //补充空格
        for (int j = i; j < count; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << c;
        cout << endl;
    }

    for (int i = 2; i <= count; i++)
    {
        //补充空格
        for (int j = i; j < count; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << c;
        cout << endl;
    }
    cout << N << endl;
    return 0;
}