#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char c; cin >> c;
    getchar();
    string str, num;
    int cnt = 1;
    getline(cin, str);
    if (c == 'C')
    {
        char pre = str[0];
        for (int i = 1; i < str.length(); i++){
            if (str[i] == pre)
                cnt++;
            else{
                if (cnt >= 2) cout << cnt;
                cout << pre;
                pre = str[i];
                cnt = 1;
            }
        }
        ///由于在上面的条件判断中要遇到下一个不一样的字符才会输出，所以最后一个字符有可能无法输出
        if (cnt >= 2) cout << cnt;
        cout << pre;
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
                num += str[i];
            else
            {
                if (num.length() > 0) cnt = stoi(num);
                while (cnt--) cout << str[i];
                num = "";
                cnt = 1;
            }
        }
    }



    return 0;
}