//
// Created by shineahead on 2022-10-04.
//
#include<iostream>
#include<queue>
#include<cmath>
#include<functional>
using namespace std;
////如何找出m和n值：先对n开平方，然后递减，如果能整除那么该因子则为最大的一组


int main()
{
    int N; cin >> N;
    priority_queue<int, vector<int>, less<int> > q;
    for (int i = 0; i < N; i++)
    {
        int num; cin >> num;
        q.push(num);
    }
    //找出m，n值
    int m = 0, n = 0, temp = sqrt(N);
    while (temp > 0)
    {
        if (N % temp == 0)
        {
            m = temp;
            n = N / temp;
            break;
        }
        temp--;
    }
    if (m < n) swap(m, n);
    int mm = m, nn = n;
    //把待输入的数据存到二维数组中
    int a[m][n];
    //开始存储数据
    int i1 = 0, j1 = 0;
    while(!q.empty()) {	//当队列非空时一直循环
        int n1 = n;
        while(n1-- > 0 && !q.empty()) {
            a[i1][j1] = q.top();
            q.pop();
            j1++;
        }
        j1--; i1++;
        n--;

        m--;
        int m1 = m;
        while(m1-- > 0 && !q.empty()) {
            a[i1][j1] = q.top();
            q.pop();
            i1++;
        }
        i1--; j1--;
        m--;

        int n2 = n;
        while(n2-- > 0 && !q.empty()) {
            a[i1][j1] = q.top();
            q.pop();
            j1--;
        }
        j1++; i1--;
        n--;

        int m2 = m;
        while(m2-- > 0 && !q.empty()) {
            a[i1][j1] = q.top();
            q.pop();
            i1--;
        }
        i1++; j1++;
    }

    for (int i = 0; i < mm; i++)
    {
        for (int j = 0; j < nn; j++)
        {
            if (j != 0) cout << " ";
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}