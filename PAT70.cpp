//
// Created by shineahead on 2022-10-25.
//
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    int n; cin >> n;
    priority_queue<double, vector<double>, greater<>> p;
    for (int i = 0; i < n; i++)
    {
        double d1; cin >> d1;
        p.push(d1);
    }

    while (p.size() != 1)
    {
        double t1 = p.top(); p.pop();
        double t2 = p.top(); p.pop();
        p.push((t1 + t2) / 2.0);
    }
    cout << (int)p.top() << endl;

    return 0;
}