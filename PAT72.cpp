//
// Created by shineahead on 2022-10-27.
//
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int m, n, stu = 0, good = 0;
    vector<string> inf;
    cin >> n >> m;

    for (int i = 0; i < m; i++){
        string t; cin >> t;
        inf.push_back(t);
    }
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        string t; int k;
        vector<string> mes;
        cin >> t >> k;
        for (int j = 0; j < k; j++)
        {
            string str; cin >> str;
            mes.push_back(str);
        }
        for (auto & me : mes)
        {
            auto pos = find(inf.begin(), inf.end(), me);
            if (!flag && pos != inf.end()){
                cout << t << ": " << me;
                good++;
                stu++;
                flag = true;
            }
            else if (flag && pos != inf.end()){
                cout << " " << me;
                good++;
            }
        }
        if (flag) cout << endl;
    }

    cout << stu << " " << good << endl;
    return 0;
}