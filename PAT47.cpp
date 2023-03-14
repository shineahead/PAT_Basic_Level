//
// Created by shineahead on 2022-10-03.
//
#include<iostream>
using namespace std;
int group[1001];

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int g, temp, mark;
        scanf("%d-%d", &g, &temp);
        cin >> mark;
        group[g] += mark;
    }

    int index, max = -1;
    for (int i = 0; i < 1001; i++)
    {
        if (group[i] > max)
        {
            max = group[i];
            index = i;
        }
    }
    cout << index << " " << max << endl;
    return 0;
}