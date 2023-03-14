#include<iostream>
using namespace std;

int main()
{
	int num, bai, shi, ge, t;
	cin >> num;
	ge = num % 10;
	shi = (num / 10) % 10;
	bai = num / 100;
	for (t = 0; t < bai; t++)
		cout << "B";
	for (t = 0; t < shi; t++)
		cout << "S";
	for (t = 1; t <= ge; t++)
		cout << t;
	system("pause");
	return 0;
}
