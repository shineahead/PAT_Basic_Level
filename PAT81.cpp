#include<iostream>
#include<cctype>
using namespace std;

///由于读入的密码可能有空格，所以需要用getline输入
int main()
{
    int n; cin >> n; getchar();
    for (int i = 0; i < n; i++){
        string temp; getline(cin, temp);
        if (temp.length() < 6)
            cout << "Your password is tai duan le." << endl;
        else{
            bool Num = false, Alpha = false, invalid = false;
            for (char &m: temp){
                ///非法字符
                if (isdigit(m)) Num = true;
                if (isalpha(m)) Alpha = true;
                if (!isdigit(m) && !isalpha(m) && m != '.'){
                    cout << "Your password is tai luan le." << endl;
                    invalid = true;
                    break;
                }
            }
            if (!invalid){
                if (Num && !Alpha)
                    cout << "Your password needs zi mu." << endl;
                else if (Alpha && !Num)
                    cout << "Your password needs shu zi." << endl;
                else
                    cout << "Your password is wan mei." << endl;
            }
        }
    }

    return 0;
}