#include<iostream>
#include<numeric>
using namespace std;

int main()
{
    int n, a[1001]; cin >> n;
    a[1] = 2, a[2] = 0, a[3] = 1, a[4] = 9;

    for (int i = 5; i <= n; i++)
        a[i] = accumulate(a + i - 4, a + i, 0) % 10;

    for (int i = 1; i <= n; i++)
        cout << a[i];


    return 0;
}