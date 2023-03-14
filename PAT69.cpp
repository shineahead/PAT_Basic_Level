//
// Created by shineahead on 2022-10-25.
//
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    int m, n, s;
    cin >> m >> n >> s;
    string total[m];
    vector<string> res;
    unordered_map<string, int> info;

    for (int i = 0; i < m; i++)
        cin >> total[i];

    for (int i = s-1; i < m; i = i + n)
    {
        string p = total[i];
        if (info[p] == 0)
        {
            res.push_back(p);
            info[p]++;
        }
        else
        {
            //这里每次continue之后i会继续加n，但是不应该允许这种行为
            i++; i -= n;
            continue;
        }
    }

    if (res.empty())
        cout << "Keep going..." << endl;
    else
    {
        for (auto & re : res)
            cout << re << endl;
    }

    return 0;
}