//
// Created by shineahead on 2022-10-07.
//
#include<iostream>
#include<cctype>
using namespace std;
int score[1001];
struct node{
    int mark;
    int total;
    int right;
    int error = 0;
    string choice;
} ques[101];
////这道题唯一就麻烦在处理学生的输入信息，这里使用find函数来查找')'的位置，然后把有效的信息加入到字符串中

int main()
{
    int m, n; cin >> n >> m;
    //题目信息
    for (int i = 0; i < m; i++)
    {
        cin >> ques[i].mark >> ques[i].total >> ques[i].right;
        for (int j = 0; j < ques[i].right; j++){
            char c; cin >> c;
            ques[i].choice.push_back(c);
        }
    }

    getchar();
    //读取学生信息
    for (int i = 0; i < n; i++)
    {
        string s; getline(cin, s);

        int sta = 0;
        int fin = s.find(')', sta);
        //遍历每个选项的内容
        for (int j = 0; j < m; j++)
        {
            string ans; int num; char c;
            //这个循环是遍历每对括号的内容
            for (int k = sta; k <= fin; k++)
            {
                c = s[k];
                if (isdigit(c))
                    num = c - '0';
                if (isalpha(c))
                    ans.push_back(c);
            }
            //答案错误
            if (ques[j].choice != ans)
                ques[j].error++;
            else
                score[i] += ques[j].mark;

            sta = fin + 1;    //继续查找下一个选项的内容
            fin = s.find(')', sta);
        }

    }
    for (int i = 0; i < n; i++)
        cout << score[i] << endl;
    //找出错误最多的题号
    int Max = 0;
    for (int i = 0; i < m; i++)
        Max = max(Max, ques[i].error);
    //打印错误最多的题号
    if (Max == 0)
        cout << "Too simple" << endl;
    else
    {
        cout << Max;
        for (int i = 0; i < m; i++)
            if (ques[i].error == Max)
                cout << " " << i + 1 ;
    }

    return 0;
}