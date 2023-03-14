#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

bool revStr(string str)
{
    string revS = str;
    reverse(str.begin(), str.end());
    for (int i = 0; i < str.size(); i++)
        if (str[i] != revS[i])
            return false;
    return true;
}

///对字符串前置补0处理
void deal_str(string& str, int n)
{
    while (str.size() != n)
    {
        str = "0" + str;
    }
}

int main()
{
    map<string, string> ref;
    ref["Jan"] = "01";
    ref["Feb"] = "02";
    ref["Mar"] = "03";
    ref["Apr"] = "04";
    ref["May"] = "05";
    ref["Jun"] = "06";
    ref["Jul"] = "07";
    ref["Aug"] = "08";
    ref["Sep"] = "09";
    ref["Oct"] = "10";
    ref["Nov"] = "11";
    ref["Dec"] = "12";
    int n; cin >> n; getchar();
    for (int i = 0; i < n; i++)
    {
        string s; getline(cin, s);
        string mon = s.substr(0, 3);
        mon = ref[mon];
        int pos_comma = s.find(',');
        string day = s.substr(4, pos_comma - 4);
        string year = s.substr(pos_comma + 2);
        deal_str(day, 2);
        deal_str(year, 4);
        string res = year + mon + day;
        if (revStr(res)) cout << "Y ";
        else cout << "N ";
        cout << res << endl;
    }

    return 0;
}