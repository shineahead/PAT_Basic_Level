#include<iostream>
#include<cmath>
using namespace std;
int count = 0, a[100001];

void fun(int n)
{
	bool flag = true;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			flag = false;
			break;
		}
	}
	if (flag)
	{
		a[count++] = n;
	}
}

int main()
{
	int M, N, key = 0;
	cin >> M >> N;
	for (int i = 2; i <= 300000; i++)	//有可能该范围不够给出的质数数量 
	{
		fun(i);
	}
	for (int i = M; i <= N; i++)
	{
		key++;
		if (key % 10 == 1 && key > 1)
			cout << endl;
		if (i == N || key % 10 == 0)
			cout << a[i-1];
		else
			cout << a[i-1] << " ";
	}
	return 0;
}
