//
// Created by shineahead on 2022-09-30.
//
#include<iostream>
#include<string>
using namespace std;
#define MAX 1000000007
////解题步骤：
////顺序遍历P的个数并记录。 逆序遍历T的个数并记录。
////最后遍历A的个数， 每遍历到一个A字符， 就将其前P字符个数与其后的T字符个数相乘， 累加，求余。 最后输出即可

int main()
{
    string str; getline(cin, str);
    //Pnum数组是用来记录第i个元素前面有几个‘P’符号
    int pnum[100001] = {0};
    for (int i = 1; i < str.length(); i++)
    {
        pnum[i] = pnum[i-1];
        if (str[i-1] == 'P')
            pnum[i]++;
    }
    int tnum = 0, sum = 0;
    ////逆序查找有多少个T和A
    for (int i = str.length()-1; i >= 0; i--)
    {
        if (str[i] == 'T')
            tnum++;
        if (str[i] == 'A')
            sum = (sum + pnum[i] * tnum) % MAX;
    }

    cout << sum << endl;
    return 0;
}

