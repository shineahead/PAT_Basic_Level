//
// Created by shineahead on 2022-10-06.
//
#include<iostream>
#include<algorithm>
#include<cctype>
#include<bitset>
using namespace std;
int a[300];

int main()
{
    string sou; getline(cin, sou);
    int sum = 0;

    //初始化a数组内的数值
    for (int i = 97; i < 97+26; i++)
        a[i] = i - 96;
    for (int i = 0; i < sou.length(); i++)
    {
        if (isalpha(sou[i]))
        {
            if (isupper(sou[i]))
                sum += a[tolower(sou[i])];
            else
                sum += a[sou[i]];
        }
    }
    bitset<32> res(sum);
    string ans = res.to_string();


    int count1 = 0, count2 = 0;
    int pos = ans.find('1');
    for (int i = pos; i < ans.length(); i++)
    {
        if (ans[i] == '1') count2++;
        else count1++;
    }
    cout << count1 << " " << count2;

    return 0;
}