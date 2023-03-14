//
// Created by shineahead on 2022-11-11.
//
#include<iostream>
#include<algorithm>
using namespace std;
///极端数据：所以要考虑对字符串进行扩展处理
///2222222222222222222
///9999999999999999999
///9999999999999999999


int main()
{
    int carry[201] = {0};
    string table, num1, num2, res;
    cin >> table >> num1 >> num2;

    reverse(table.begin(), table.end());
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    int i;
    for (i = table.size(); i < 30; i++)
        table += "0";
    for (i = num1.size(); i < 30; i++)
        num1 += "0";
    for (i = num2.size(); i < 30; i++)
        num2 += "0";

    for (i = 0; i < 30; i++)
    {
        int t1, t2, sum = 0, quanzhong;
        if (i > num1.size() - 1) t1 = 0;
        else t1 = num1[i] - '0';

        if (i > num2.size() - 1) t2 = 0;
        else t2 = num2[i] - '0';

        sum = t1 + t2 + (i - 1 >= 0 ? carry[i - 1] : 0);
        ///计算进制
        if (table[i] == '0') quanzhong = 10;
        else quanzhong = table[i] - '0';

        if (i > 19) quanzhong = 10;
        carry[i] = sum / quanzhong;
        sum = sum - carry[i] * quanzhong;

        res += to_string(sum);
    }
    res += to_string(carry[i - 1]);
    reverse(res.begin(), res.end());

    bool f = false;
    for (i = 0; i < res.size(); i++){
        if (f)
            cout << res[i];
        if (res[i] != '0' && !f){
            f = true;
            cout << res[i];
        }
    }
    ///测试点5
    if (!f) cout << 0 << endl;
    return 0;
}