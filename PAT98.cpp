#include<iostream>
using namespace std;

int main()
{
    int n, a[110], b[110], maxB = 0, minA = 9999;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        ///找出上管道的最低
        minA = min(a[i], minA);
    }
    for (int i = 1; i <= n; i++){
        cin >> b[i];
        ///找出下管道的最高
        maxB = max(b[i], maxB);
    }

    if (minA <= maxB) cout << "No " << maxB + 1 - minA << endl;
    else cout << "Yes " << minA - maxB << endl;

    return 0;
}