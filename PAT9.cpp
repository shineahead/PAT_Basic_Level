#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>	//findº¯ÊýµÄ°ü
using namespace std;

int main()
{
	string a;
	getline(cin, a);
	int p = a.length() - 1;
	for (int i = p; i >= 0; i --)
	{
		if (a[i] != ' ' && a[i-1] == ' ')
		{
			for (int j = i; j <= p; j++)
				cout << a[j];
			cout << " ";
			p = i - 2;
		}
		if (i == 0)
		{
			for (int j = i; j <= p; j++)
				cout << a[j];
		}
	}
	return 0;
}
