//
// Created by shineahead on 2022-10-07.
//
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
////思想：用vector数组来接受数字，把从0到n的数字都遍历一遍，然后用count函数计算大于i的个数
////最后遍历0-n，找出最大的数字
////在样例输入中，我们是允许ans[i] > i的情况出现的，也就是多于E的天数大于E本身
//ans[i]表示超过i公里的天数
int ans[100001], i;
vector<int> source;
//count_if的判断条件
bool countIf(int t)
{
    return t > i;
}


int main()
{
    int n; cin >> n;
    for (i = 0; i < n; i++)
    {
        int a; cin >> a;
        source.push_back(a);
    }
    for (i = 0; i < n; i++)
        if (source[i] > n)
            source[i] = n + 1;
    //计算每个数的e值
    for (i = 0; i <= n; i++)
        ans[i] = count_if(source.begin(), source.end(), countIf);


    int Max = 0;
    for (i = 0; i <= n; i++)
    {
        if (i <= ans[i])
            Max = max(Max, i);
    }
    cout << Max << endl;
    return 0;
}