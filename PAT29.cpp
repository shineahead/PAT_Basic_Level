//
// Created by shineahead on 2022-09-24.
//
#include<iostream>
#include<cctype>
using namespace std;

//测试点4的数据，while (s2[i])可能在应该输出还没有结束的时候就退出了
//应该改成while(s1[count])
//Asssdd
//sss

int main()
{
    string s1, s2, res;
    cin >> s1 >> s2;
    int i = 0, count = 0;

    //思想就是比较两个字符串不一样的地方
    //把不一样的字符加到res中
    while(s1[count])
    {
        if (s2[i] == s1[count])
        {
            i++;
            count++;
        }
        else
        {
            int j;
            //检查有没有重复的字符
            for (j = 0; j < res.size(); j++)
            {
                if (toupper(res[j]) == toupper(s1[count]))
                    break;
            }
            if (j == res.size())
                res += s1[count];
            count++;
        }
    }

    for (char re : res)
    {
        if (islower(re))
            printf("%c", toupper(re));
        else
            cout << re;
    }

    return 0;
}