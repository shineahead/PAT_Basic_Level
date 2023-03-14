//
// Created by shineahead on 2022-09-26.
//
#include<iostream>
using namespace std;
double a[100001];

//注意：题中并未说分数一定是整数， 因此要定义浮点型变量
int main()
{
    int N, i, max_id = 1;
    double max = 0;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        int num;
        double score;
        cin >> num >> score;
        a[num] += score;
    }
    for (i = 1; i <= N; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_id = i;
        }
    }

    cout << max_id << " " << a[max_id] << endl;
    return 0;
}