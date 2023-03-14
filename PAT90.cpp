#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int m, n;
    map<string, string> res;
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        string t1, t2;
        cin >> t1 >> t2;
        res.insert(make_pair(t1, t2));
        res.insert(make_pair(t2, t1));
    }

    for (int i = 0; i < m; i++){
        int k; cin >> k;
        vector<string> src;
        for (int j = 0; j < k; j++){
            string t; cin >> t;
            src.push_back(t);
        }
        bool f = true;
        for (auto &p: src){
            string pr = res[p];
            if (!pr.empty()){
                auto pos = find(src.begin(), src.end(), pr);
                if (pos != src.end()){
                    cout << "No" << endl;
                    f = false;
                    break;
                }
            }
        }
        if (f) cout << "Yes" << endl;
    }

    return 0;
}