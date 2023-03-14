#include<iostream>
using namespace std;
int a[101] = { 0 }, verify[10001] = { 0 }, b[101];

void func(int n)
{
	while (n != 1)
	{
		if (n % 2 == 0)
		n /= 2;
		else
		n = (3 * n + 1) / 2;
		verify[n]++;
	}
}

int main()
{
	int K, i, temp, p, t, symbol;
	cin >> K;
	for (i = 0; i < K; i++)
		cin >> a[i];
	for (i = 0; i < K; i++)
	{
		func(a[i]);
	}
	for (p = 0, i = 0; i < K; i++)
	{
		temp = a[i];
		if (verify[temp] == 0)		//verify相当于'桶排序' 
			b[p++] = temp;			//b用来储存要输出的数字，然后对b再排一次序 
	}
	for (i = 0; i < p; i++)
	{
		temp = b[i];
		for (int j = i + 1; j < p; j++)
		{
			if (b[j] > temp)
			{
				temp = b[j];
				symbol = j;
			}
		}
		if (temp != b[i])
		{
			t = b[i];
			b[i] = b[symbol];
			b[symbol] = t;
		}
	}
	for (i = 0; i < p; i++)
	{
		cout << b[i];
		if (i == p -1)
			break;
		else
			cout << "";
	}
	return 0;
}
