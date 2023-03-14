#include<iostream>
#include<functional>
#include<map>
using namespace std;

int main()
{
    int n; cin >> n;
    map<int, int, greater<>> res;
    for (int i = 1; i <= n; i++){
        int t; cin >> t;
        res[max(t, i) - min(t, i)]++;
    }
    for (auto &m: res)
        if (m.second != 1)
            cout << m.first << " " << m.second << endl;

    return 0;
}