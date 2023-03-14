//
// Created by shineahead on 2022-10-08.
//
#include<iostream>
using namespace std;
int stu[101], mark[101], correct[101], ans[101];

int main()
{
    int n, m; cin >> n >> m;
    //读取每道题的分数
    for (int i = 0; i < m; i++)
        cin >> mark[i];
    //读取每道题正确的选项
    for (int i = 0; i < m; i++)
        cin >> correct[i];

    //读取n个学生的信息
    for (int i = 0; i < n; i++)
    {
        //读取每个学生的答题情况
        for (int j = 0; j < m; j++)
            cin >> ans[j];
        for (int k = 0; k < m; k++)
            if (ans[k] == correct[k])
                stu[i] += mark[k];
    }
    for (int i = 0; i < n; i++)
        cout << stu[i] << endl;

    return 0;
}