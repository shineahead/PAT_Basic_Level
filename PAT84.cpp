#include<iostream>
using namespace std;

int main()
{
    string ans; int n;
    cin >> ans >> n;
    ///只用循环n-1次，因为第一个ans是第一项
    for (int i = 1; i < n; i++){
        string t;
        for (int j = 0; j < ans.length(); j++){
            int cnt = 1, k;
            for (k = j + 1; k < ans.length() && ans[k] == ans[j]; k++)
                cnt++;
            j = k - 1;
            t += ans[j] + to_string(cnt);
        }
        ans = t;
    }

    cout << ans << endl;
    return 0;
}