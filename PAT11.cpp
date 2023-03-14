#include<iostream>
using namespace std;

int main()
{
	int N, A, B, C, count = 1;
	long long sum;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A >> B >> C;
		sum = A + B;
		if (sum > C)
			cout << "Case #" << count++ << ": " << "true" << endl;
		else
			cout << "Case #" << count++ << ": " << "false" << endl;
	}
	system("pause");
	return 0;
}
