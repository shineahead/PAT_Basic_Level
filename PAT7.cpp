#include<iostream>
#include<cmath>
using namespace std;
int a[10000] = {2}, b = 1;

bool val(int n)
{
	bool flag = true;
	int i = 2;
	while (i < sqrt(n))
	{
		if (n % i == 0)
		{
			flag = false;
			break;
		}
		i++;
	}
	return flag;
}

int main()
{
	int n, i, head, tail, total = 0;
	cin >> n;
	for (i = 3; i <= n; i += 2)
	{
		if (val(i))
		{
			a[b++] = i;
		}
	}
	head = 0;
	tail = 1;
	while (tail < b)
	{
		if (a[tail] - a[head] == 2)
			total++;
		head++;
		tail++;
	}
	cout << total << endl;
	system("pause");
	return 0;
}
