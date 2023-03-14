#include<iostream>
using namespace std;

int main()
{
	int n, m, a[101];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
	{
		int temp = a[n-1];
		for (int j = n-1; j > 0; j--)
			a[j] = a[j-1];
		a[0] = temp;
	}
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
		if (k == n-1)
			continue;
		else
			cout << " ";
		k++;
	}
	return 0;
}
