//
// Created by shineahead on 2022-10-07.
//
#include<iostream>
#include<cmath>
#include<map>
using namespace std;

//判断是否为素数
bool func(int data)
{
    if (data == 2)
        return true;
    int ext = sqrt(data);
    for (int i = 2; i <= ext; i++)
        if (data % i == 0)
            return false;
    return true;
}


int main()
{
    int n; cin >> n;
    map<string, string> stuPrize;
    for (int i = 1; i <= n; i++)
    {
        string temp; cin >> temp;
        string award;
        if (i == 1)
            award = "Mystery Award";
        else if (func(i))
            award = "Minion";
        else
            award = "Chocolate";
        stuPrize.insert(make_pair(temp, award));
    }

    int k; cin >> k;
    for (int i = 0; i < k; i++)
    {
        string temp; cin >> temp;
        cout << temp << ": ";
        auto pos = stuPrize.find(temp);
        if (pos != stuPrize.end())
        {
            cout << stuPrize[temp] << endl;
            //已经查询过的ID，设置为Checked
            stuPrize[temp] = "Checked";
        }
        else
            cout << "Are you kidding?" << endl;
    }

    return 0;
}