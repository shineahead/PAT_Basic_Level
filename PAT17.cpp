#include<iostream>
using namespace std;

int main()
{
	int b, p, q = 0;
	string a;
	cin >> a >> b;
	//a[0] - '0' + q * 10代表这一位的数字和 
	if (a.length() == 1)
	{
		p = (a[0] - '0' + q * 10) / b;
		q = (a[0] - '0' + q * 10) % b;
		cout << p;
	}
	else
	{
		p = (a[0] - '0' + q * 10) / b;
		q = (a[0] - '0' + q * 10) % b;
		if (p != 0)
			cout << p;
		for (int i = 1; i < a.length(); i++)
		{
			p = (a[i] - '0' + q * 10) / b;
			q = (a[i] - '0' + q * 10) % b;
			cout << p;
		}
	}
	
	cout << " " << q << endl;
	system("pause");
	return 0;
}
