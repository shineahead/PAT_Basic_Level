#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
	int cnt=0,flag=0;
	string s1,s2,s3,s4;
	cin >> s1 >> s2 >> s3 >> s4;
	for (int i = 0; i < s1.length(); i++)
	{
        if (s1[i] >= 'A' && s1[i] <= 'G' && flag==0 && s1[i] == s2[i])
        {       
                switch (s1[i])
                {//����ʹ��break�漰�����Ե�3
                    case 'A':cout << "MON ";break;
                    case 'B':cout << "TUE ";break;
                    case 'C':cout << "WED ";break;
                    case 'D':cout << "THU ";break;
                    case 'E':cout << "FRI ";break;
                    case 'F':cout << "SAT ";break;
                    case 'G':cout << "SUN ";break;
                }	
                flag = 1; continue;
			}
            else if (flag == 1 && s1[i] == s2[i])
            {
                if (isdigit(s1[i]))
                {
                    printf("0%d:", s1[i]-'0');//���ַ���ת��Ϊ���ͣ��漰��1��2��4���Ե�
                    break;
                }
                else if (s1[i] >= 'A' && s1[i] <= 'N')
                {
                    cnt=s1[i] - 'A' + 10;
                    printf("%d:", cnt); 
                    break;
                }
            }	
	}
	for (int i = 0; i < s3.length(); i++)
	{
		if ((s3[i] >= 'a' && s3[i] <= 'z') || (s3[i] >= 'A' && s3[i] <= 'Z'))
		{
			if (s3[i] == s4[i])
            {
               printf("%02d", i);
               break;//breakҪ�����if����ʹ�ã���������һ��if���棬������Ե�1��4ͨ����
            }        //���Բ���break,Ҳ��
		}
	}
    return 0;
}
