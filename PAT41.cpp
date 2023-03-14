//
// Created by shineahead on 2022-09-30.
//
#include<iostream>
using namespace std;
string a[1001];
int b[1001];


int main()
{
    int N; cin >> N;
    for (int i = 0; i < N; i++)
    {
        string s; cin >> s;
        int ceshi; cin >> ceshi;
        int shangji; cin >> shangji;

        a[ceshi] = s;
        b[ceshi] = shangji;
    }
    int M; cin >> M;
    for (int i = 0; i < M; i++)
    {
        int temp; cin >> temp;

        cout << a[temp] << " " << b[temp] << endl;
    }

    return 0;
}