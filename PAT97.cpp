#include<iostream>
using namespace std;
int a[110][110];


int main()
{
    int n, k, x, count = 1; ///要移动的位数
    cin >> n >> k >> x;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    ///奇数行移动
    for (int i = 1; i <= n; i += 2)
    {
        if (count == k + 1) count = 1;
        for (int j = n; j >= count + 1; j--)
            a[i][j] = a[i][j - count];
        for (int j = 1; j <= count; j++)
            a[i][j] = x;
        count++;
    }

    for (int i = 1; i <= n; i++){
        int sum = 0;
        for (int j = 1; j <= n; j++)
            sum += a[j][i];
        cout << sum;
        if (i != n)
            cout << " ";
    }
    return 0;
}