//
// Created by shineahead on 2022-09-29.
//
#include<iostream>
using namespace std;
int a[101], b[100001];

int main()
{
    int N; cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp; cin >> temp;
        a[temp]++;
    }
    int K; cin >> K;
    for (int i = 0; i < K; i++)
        cin >> b[i];

    for (int i = 0; i < K; i++)
    {
        if (i != K-1)
            cout << a[b[i]] << " ";
        else
            cout << a[b[i]];
    }

    return 0;
}