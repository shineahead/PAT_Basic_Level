#include<iostream>
using namespace std;

struct score{
	int win = 0;
	int lose = 0;
	int cmp = 0;
	char a[3][200];
}jia, yi;

int func(char a, char b)
{
	if (a == b)
		return 0;
	else if (a == 'J' && b == 'B')
		return 1;
	else if (a == 'B' && b == 'C')
		return 1;
	else if (a == 'C' && b == 'J')
		return 1;
	else
		return 2;
}

int main()
{
	int N;
	for (int i = 0; i < N; i++)
	{
		char a, b;
		cin >> a >> b;
		switch (func(a, b))
		{
			case 0: jia.cmp++; yi.cmp++;break;
			case 1: jia.win++; yi.lose++;break;
			case 2: jia.lose++; yi.win++;break;
			default: break;
		}
	}
	cout << jia.win << " " << jia.lose << " " << jia.cmp << endl;
	cout << yi.win << " " << yi.lose << " " << yi.cmp << endl;
	system("pause");
	return 0;
}
