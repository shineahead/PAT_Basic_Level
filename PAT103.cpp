#include<iostream>
#include<cmath>
using namespace std;

long long fix(long long c)
{
    for (long long i = 1; i <= sqrt(c); i++)
        if (pow(i, 2) + pow(i - 1, 2) == c)
            return i;
    return -1;
}

int main()
{
    long long m, n, c, b;
    bool f = false;
    cin >> m >> n;

    for (long long i = m; i <= n; i++)
    {
        long long cc = pow(i, 3) - pow(i - 1, 3);
        c = sqrt(cc);

        if (c * c == cc){
            b = fix(c);
            if (b != -1) {
                ///注意：1和1不是一对缘分数
                if (i != 1 && b != 1) {
                    cout << i << " " << b << endl;
                    f = true;
                }
            }
        }
    }

    if (!f) cout << "No Solution" << endl;

    return 0;
}