//
// Created by shineahead on 2022-09-25.
//
#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int N, i, j;
    int sec[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    bool flag = true;
    cin >> N;

    for (i = 0; i < N; i++)
    {
        string inf;
        int sum = 0, res = 0;
        cin >> inf;

        for (j = 0; j < 17; j++)
        {
            char c = inf[j];
            //如果出现了字母
            if (isalpha(c))
            {
                flag = false;
                cout << inf << endl;
                break;
            }
            sum += (c - '0') * sec[j];
        }
        //如果没有出现字母
        if (j == 17)
        {
            res = sum % 11;
            if (M[res] != inf[17])
            {
                flag = false;
                cout << inf << endl;
            }
        }
    }

    if (flag)
        cout << "All passed" << endl;
    return 0;
}