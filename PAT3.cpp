#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[101];
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		int flag = 1, pre, mid, lat, loc_t = 0, loc_p = 0;
		int sum1 = 0, sum2 = 0, sum3 = 0;
		cin >> str;
		for (int j = 0; j < strlen(str); j++)
		{
			switch(str[j])
			{
				case 'P':sum1++; loc_p = j; break;
				case 'A':sum2++; break;
				case 'T':sum3++; loc_t = j; break;
				default :flag = 0;break;
			}
			if (flag == 0)
				break;
		}
		pre = loc_p; 	//pre表示P前面有多少个A字符
		mid = loc_t - loc_p - 1; 	//mid表示p与t之间有多少个A字符
		lat = strlen(str) - loc_t - 1;	//lat表示T之后有多少个A字符 
		if (flag == 0)	//如果flag为0，那么说明有其他的字符 
			cout << "NO" << endl;
		else
		{
			if ((sum1 == 1) && (sum3 == 1) && sum2 && (pre * mid == lat) && (loc_t > loc_p) && mid)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}	
	return 0;
}
