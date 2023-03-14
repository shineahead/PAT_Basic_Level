#include<iostream>
#include<algorithm>
using namespace std;

string solve(string src)
{
    reverse(src.begin(), src.end());
    return src;
}

int main()
{
    int a, b, ans, res;
    cin >> a >> b;
    ans = a * b;
    res = stoi(solve(to_string(ans)));
    cout << res << endl;

    return 0;
}