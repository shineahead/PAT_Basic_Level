#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

bool judge(int t)
{
    set<int> st;

    for (int i = 1; i <= t; i++)
        if (t % i == 0)
            st.insert(i);

    if (st.size() < 4) return false;

    for (auto &i: st)
        for (auto &j: st)
            for (auto &p: st)
                for (auto &k: st)
                    if (i != j && i != p && i != k && j != p && j != k && p != k)
                        if ((i + j + p + k) % t == 0)
                            return true;
    return false;

}

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        if (judge(tmp))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}