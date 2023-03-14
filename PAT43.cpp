//
// Created by shineahead on 2022-10-02.
//
#include<iostream>
#include<algorithm>
using namespace std;
int a[300], sum;
const string ans = "PATest";
//按顺序打印PATest
void func()
{
    while (sum)
    {
        for (char an : ans)
        {
            if (a[an] != 0)
            {
                cout << an;
                a[an]--;
                sum--;
            }
        }
    }
}

int main()
{
    string str; cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        int n = count(ans.begin(), ans.end(), str[i]);
        if (n != 0)
        {
            a[str[i]]++;
            sum++;
        }
    }
    func();

    return 0;
}