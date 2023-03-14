#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n, a[1001], temp, sum1 = 0, sum2 = 0,val = 1, max = 0, num3 = 0, k = 0, p = 0, l = 0;
	char flag[6];
	float average = 0, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		if (a[i] % 5 == 0 && a[i] % 2 == 0)
		{
			flag[1] = '1';
			sum1 += a[i];
			p = 1;
		}
		else if (a[i] % 5 == 1)
		{
			sum2 = sum2 + (a[i] * val);
			val = -val;
			k = 1;
		}
		else if (a[i] % 5 == 2)
		{
			num3++;
		}
		else if (a[i] % 5 == 3)
		{
			average += a[i];
			count++;
			l = 1;
		}
		else if (a[i] % 5 == 4)
		{
			if (max < a[i])
				max = a[i];
		}
	}
	if (p == 0)
		cout << "N ";
	else
		cout << sum1 << " ";
	if (k == 0)
		cout << "N ";
	else
		cout << sum2 << " ";
	if (num3 == 0)
		cout << "N ";
	else
		cout << num3 << " ";
	if (l == 0)
		cout << "N ";
	else
		cout << setprecision(2) << average / count << " ";
	if (max == 0)
		cout << "N";
	else
		cout << max;
	return 0;
}
