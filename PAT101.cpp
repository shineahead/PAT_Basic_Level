#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int order;

float solve(ll a, ll d)
{
    for (int i = 0; i < d; i++)
    {
        int ad = a % 10;
        a /= 10;
        a = a + ad * order;
    }
    return float(a);
}

int main()
{
    ll a, d; float b;
    cin >> a >> d;
    order = pow(10, int(log10(a)));

    b = solve(a, d);

    printf("%.2f\n", b / float(a));

    return 0;
}
