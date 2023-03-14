//
// Created by shineahead on 2022-11-03.
//
#include<iostream>
#include<vector>
using namespace std;
struct Problem{
    int fullMark;
    int op;
    int correctOp;
    int errorMax;   //最多错误人数
    int errorOp[300];    //错误选项,用桶排序的思想存储字符
    string correct;
} node[101];

int main()
{
    int m, n;
    cin >> n >> m;

    for (int i = 1; i <= m; ++i){
        cin >> node[i].fullMark >> node[i].op >> node[i].correctOp;
        for (int j = 0; j < node[i].correctOp; ++j){
            char c; cin >> c;
            node[i].correct.push_back(c);
        }
    }

    double mark[1001];
    for (int i = 0; i < n; ++i){
        string temp; getline(cin, temp);
        int pos1 = 0, pos2 = 0;
        pos1 = temp.find('(');
        pos2 = temp.find(')');
        for (int j = 0; j < m; ++j){
            //剪切字符串
            string son = temp.substr(pos1 + 1, pos2 - pos1 - 1);
            int num = son[0] - '0';
            for (int k = 0; k < num; k++){

            }
        }
    }
    return 0;
}