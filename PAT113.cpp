#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> add(vector<int> &v1, vector<int> &v2)
{
    vector<int> res;
    int carry = 0;
    for (int i = 0; i < v1.size() || i < v2.size(); i++)
    {
        if (i < v1.size()) carry += v1[i];
        if (i < v2.size()) carry += v2[i];
        res.push_back(carry % 30);
        carry /= 30;
    }
    while (carry != 0)
    {
        res.push_back(carry % 30);
        carry /= 30;
    }
    ///去除前导零
    while (res.size() > 1 && res.back() == 0) res.pop_back();

    return res;
}

int main()
{
    vector<int> v1, v2;
    string s1, s2, ans; cin >> s1 >> s2;

    for (int i = s1.size() - 1; i >= 0; i--){
        if (isdigit(s1[i]))
            v1.push_back(s1[i] - '0');
        else
            v1.push_back(s1[i] - 'a' + 10);
    }
    for (int i = s2.size() - 1; i >= 0; i--){
        if (isdigit(s2[i]))
            v2.push_back(s2[i] - '0');
        else
            v2.push_back(s2[i] - 'a' + 10);
    }

    vector<int> res = add(v1, v2);
    reverse(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++){
        if (res[i] < 10) ans += char(res[i] + '0');
        else ans += char(res[i] - 10 + 'a');
    }
    cout << ans << endl;

    return 0;
}