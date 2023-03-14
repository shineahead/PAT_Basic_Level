#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int func(int a, int b)
{
	int value = b, sum = 0;
	int count = log10(a) + 1;
	for (int i = 0; i < count; i++)
	{
		int key = a % 10;
		if (key == value)
		{
			sum = sum * 10 + value;
		}
		a /= 10;
	}
	return sum;
}

int main()
{
	int a, b, c, d;
	long long total = 0;
	cin >> a >> b >> c >> d;
	
	total = func(a, b) + func(c, d);
	cout << total;
	system("pause");
	return 0;
}
