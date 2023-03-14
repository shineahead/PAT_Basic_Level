//
// Created by shineahead on 2022-09-29.
//
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//标记数组，防止重复计算缺少的珠子
int mark[300];

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    bool flag = true;
    for (char temp : s2)
    {
        int cnt1 = count(s1.begin(), s1.end(), temp);
        int cnt2 = count(s2.begin(), s2.end(), temp);
        if (cnt1 < cnt2)
            flag = false;
    }
    if (flag)
        cout << "Yes " << s1.size() - s2.size() << endl;
    //缺少珠子的情况
    else
    {
        int lack = 0;
        for (char temp : s2)
        {
            int cnt1 = count(s1.begin(), s1.end(), temp);
            int cnt2 = count(s2.begin(), s2.end(), temp);
            if (cnt1 < cnt2)
            {
                if (mark[temp] != 1)
                {
                    lack += cnt2 - cnt1;
                    mark[temp] = 1;
                }
            }
        }
        cout << "No " << lack << endl;
    }


    return 0;
}