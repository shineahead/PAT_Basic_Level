//
// Created by shineahead on 2022-10-09.
//
#include<iostream>
#include<set>
using namespace std;

int getFriendNum(int a)
{
    int sum = 0;
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main()
{
    int n; cin >> n;
    set<int> ans;
    for (int i = 0; i < n; i++)
    {
        int temp; cin >> temp;
        ans.insert(getFriendNum(temp));
    }

    cout << ans.size() << endl;
    for (auto i = ans.begin(); i != ans.end(); i++){
        if (i != ans.begin())
            cout << " ";
        cout << *i;
    }
    return 0;
}