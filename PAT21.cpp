#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, value, a[11] = { 0 };
	string str;
	cin >> str;
	n = str.length();
	while (n >= 0)
	{
		value = (int)str[n-1] - '0';
		switch (value){
			case 0:a[0]++;break;
			case 1:a[1]++;break;
			case 2:a[2]++;break;
			case 3:a[3]++;break;
			case 4:a[4]++;break;
			case 5:a[5]++;break;
			case 6:a[6]++;break;
			case 7:a[7]++;break;
			case 8:a[8]++;break;
			case 9:a[9]++;break;
		}
		if (n == 0)
			break;
		n--;
	}
	
	for (int i = 0; i < 11; i++)
		if (a[i] != 0)
			cout << i << ":" << a[i] << endl;
	
	system("pause");
	return 0;
}