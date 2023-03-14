#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
	string A;
	cin >> A;
	int i = A.find('E');//找到E的位置 
	int len = A.length(); 
	string e = A.substr(0,i);//小数部分 
	string c = A.substr(i+1,len-i);//指数部分
	int C = stoi(c);//指数
	
	if(e[0] == '-')
	{//如果小数部分是负数 要先输出负号 
		cout << "-";
	}	
	
	if(C < 0)
	{//如果指数小于零
		cout << "0.";//要先输出前面的0 
		for(int k = C + 1; k < 0; k++)
			cout << "0";
		
		for(int j = 1; j <e.length(); j++)//在输出后面的数 
			if(e[j] != '.')
				cout << e[j];
	}
	else
	{
		int l = A.find('.');
		int length = i - l - 1;//小数点到E之间的数字个数 
		if(length <= C)
		{//如果小数点后的数字长度小于指数那么结果是个整数直接输出即可 
			for(int i = 1; i < e.length(); i++)
				if(e[i] != '.')
					cout << e[i];
			
			for(int i = 0; i < C - length; i++)
				cout << "0";
		}
		else
		{//如果小数点后的数字长度大于指数那么结果为小数 
			for(int i = 1; i <= l + C; i++)
			//先输出小数点前的数 
				if(e[i] != '.')
					cout << e[i];				 
			
			cout << ".";
			for(int j = l + 1 + C; j < e.length(); j++)//从结果的小数点下一位开始 
				cout << e[j];					
		}	
	}	
	return 0;
}
