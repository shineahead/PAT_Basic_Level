//
// Created by shineahead on 2022-09-30.
//
#include<iostream>
#include<cctype>
using namespace std;
int a[300];

int main()
{
    string str; getline(cin, str);
    for (char i : str)
    {
        //该字符不是空格
        if (i != 32 && isalpha(i))
        {
            char c = isupper(i) ? tolower(i) : i;
            a[c]++;
        }
    }
    int max = 0;
    for (int i = 0; i < 300; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    for (int i = 0; i < 300; i++)
    {
        if (a[i] == max)
        {
            cout << char(i) << " " << max << endl;
            break;
        }
    }

    return 0;
}