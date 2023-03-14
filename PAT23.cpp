#include<iostream>
using namespace std;

int main()
{
	int a[10], min[51] = { 0 }, n = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
		n += a[i];
	}
	int key = 1;
	while (true)
	{
		if (a[key] != 0)
		{
			min[1] = key;
			a[key]--;
			break;
		}
		else
			key++;
	}
	key = 2;
	for (int i = 0; i < 10; i++)
	{
		while (a[i] != 0)
		{
			min[key++] = i;
			a[i]--;
		}
	}
	for (int i = 1; i <= n; i++)
		cout << min[i];
	putchar('\n');
	system("pause");
	return 0;
}