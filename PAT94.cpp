#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
typedef long long ll;
ll res;

bool prime_number(ll a)
{
    if (a == 2) return true;
    for (ll i = 2; i <= sqrt(a); i++)
        if (a % i == 0)
            return false;
    return true;
}

int main()
{
    int l, k;
    cin >> l >> k;
    string q; cin >> q;
    for (int i = 0; i + k - 1 < l; i++) {
        string substr = q.substr(i, k);
        res = stoll(substr);
        ///特别注意0，1都不是素数
        if (prime_number(res) && res != 1 && res != 0){
            ///设置填充字符
            cout << setfill('0') << setw(k);
            cout << res << endl;
            return 0;
        }
    }
    cout << "404" << endl;
    return 0;
}