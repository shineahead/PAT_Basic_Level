#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	char a[102];
	int temp, i = 0, total = 0, count, key = 1;
	cin >> a;
	while (a[i] != '\0')
	{
		total += a[i] - '0';
		i++;
	}
	count = log10(total);
	for (i = 1; i <= count; i++)
		key = 10 * key;
	for (i = 0; i <= count; i++)
	{
		temp = total / key;
		switch(temp)
		{
			case 1: cout << "yi";break;
			case 2: cout << "er";break;
			case 3: cout << "san";break;
			case 4: cout << "si";break;
			case 5: cout << "wu";break;
			case 6: cout << "liu";break;
			case 7: cout << "qi";break;
			case 8: cout << "ba";break;
			case 9: cout << "jiu";break;
			case 0: cout << "ling"; break;
		}
		if (key == 1)
			break;
		else
			cout << " ";
		total = total % key;
		key = key / 10;
	}
	return 0;
}
