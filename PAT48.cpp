//
// Created by shineahead on 2022-10-03.
//
#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
char oddSet[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};
////注意：该题a，b的字符串长度可能不一致，需要在前面补充0

int main()
{
    ios::sync_with_stdio(false);
    string a, b, c; cin >> a >> b;
    reverse(a.begin(), a.end()) ;		//字符串翻转
    reverse(b.begin(), b.end()) ;
    for (int i = 0; i < a.size() or i < b.size(); i++)
    {
        //超出a字符串要用0来补充
        int k1 = i < a.size() ? a[i] - '0' : 0;
        //超出a字符串要用0来补充
        int k2 = i < b.size() ? b[i] - '0' : 0;
        //注意这里i的奇偶性和数字的奇偶性是相反的
        c.push_back(i % 2 == 0 ? oddSet[(k1 + k2) % 13] : (k2 - k1 + 10) % 10 + '0');
    }
    reverse(c.begin(), c.end());
    cout << c << endl;
    return 0;
}
