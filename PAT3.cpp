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
		pre = loc_p; 	//pre��ʾPǰ���ж��ٸ�A�ַ�
		mid = loc_t - loc_p - 1; 	//mid��ʾp��t֮���ж��ٸ�A�ַ�
		lat = strlen(str) - loc_t - 1;	//lat��ʾT֮���ж��ٸ�A�ַ� 
		if (flag == 0)	//���flagΪ0����ô˵�����������ַ� 
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
