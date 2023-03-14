//
// Created by shineahead on 2022-09-26.
//
#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int a[300];

int main()
{
    string s1, s2;
    bool flag = true;
    //cin >> s1 >> s2;
    //在PAT里，cin输入字符串有很多bug，有很多时候并不是样例过不了，就是单纯的因为用了cin输入字符串
    getline(cin, s1);
    getline(cin, s2);
    for (char i : s1)
    {
        a[i] = 1;
        a[tolower(i)] =1;
        if (i == '+')
            flag = false;
    }

    for (char i: s2)
    {
        //无法输出大写字母
        if (!flag)
        {
            //如果不是大写字母
            if ( !isupper(i) )
                //如果不是坏键
                if ( !a[i] )
                    cout << i;
        }
        else
        {
            //如果不是坏键
            if (!a[i])
                cout << i;
        }
    }

    return 0;
}