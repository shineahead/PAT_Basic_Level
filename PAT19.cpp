#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
using namespace std;

struct mes{
	int price;
	int store;
	double ava;
}goods[1000];

int cmp(struct mes a, struct mes b)
{
	return a.ava > b.ava;
}


int main()
{
	int N, require, total = 0;
	double ans = 0;
	cin >> N >> require;
	
	for (int i = 0; i < N; i++)
		cin >> goods[i].store;
	for (int i = 0; i < N; i++)
		cin >> goods[i].price;
	for (int i = 0; i < N; i++)
		goods[i].ava = (double)goods[i].price / (double)goods[i].store;
	
	sort(goods, goods + N, cmp);

	for (int i = 0; i < N; i++)
	{
		if (require > goods[i].store)
		{
			total += goods[i].store;
			ans += goods[i].price;
			require -= goods[i].store;
		}
		else
		{
			ans += goods[i].price * ((double)require / (double)goods[i].store);
			require = 0;
		}
		
		if (require == 0)
			break;
	}
	
	cout << setiosflags(ios::fixed) << setprecision(2) << ans << endl;
	system("pause");
	return 0;
}
