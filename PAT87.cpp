#include<iostream>
#include<cstring>
using namespace std;

bool f[10001];

int main()
{
    int ans = 0, i1, i2, i3;
    double d1, d2, d3, n;
    memset(f, 0, sizeof f);
    cin >> n;
    for (int i = 1; i <= n; i++){
        d1 = (double)i / 2; i1 = (int)d1;
        d2 = (double)i / 3; i2 = (int)d2;
        d3 = (double)i / 5; i3 = (int)d3;
        int sum = i1 + i2 + i3;
        if (!f[sum]){
            f[sum] = true;
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}