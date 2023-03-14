//
// Created by shineahead on 2022-09-13.
//
#include<iostream>
#include<string>
using namespace std;

struct inf{
    string name;
    int year;
    int month;
    int day;
};


int main()
{
    int N, count = 0;
    string old_name, young_name;
    cin >> N;
    struct inf data, young, old;
    young.name = "young";
    young.year = 1814;
    young.month = 9;
    young.day = 6;
    old.name = "old";
    old.year = 2014;
    old.month = 9;
    old.day = 6;

    for (int i = 0; i < N; i++)
    {
        //读入数据
        string temp;
        cin >> data.name >> temp;
        data.year = stoi(temp.substr(0, 4));
        data.month = stoi(temp.substr(5, 2));
        data.day = stoi(temp.substr(8, 2));
        //处理无效的数据
        if (data.year < 1814 || (data.year == 1814 && data.month < 9)||
                (data.year == 1814 && data.month == 9 && data.day < 6))
            continue;
        if (data.year > 2014 || (data.year == 2014 && data.month > 9)||
            (data.year == 2014 && data.month == 9 && data.day > 6))
            continue;

        //更新最年老的数据
        if (data.year < old.year || (data.year == old.year && data.month < old.month)||
            (data.year == old.year && data.month == old.month && data.day < old.day))
        {
            old.year = data.year;
            old.month = data.month;
            old.day = data.day;
            old_name = data.name;
        }
        //更新年轻的数据
        if (data.year > young.year || (data.year == young.year && data.month > young.month)||
            (data.year == young.year && data.month == young.month && data.day > young.day))
        {
            young.year = data.year;
            young.month = data.month;
            young.day = data.day;
            young_name = data.name;
        }

        count++;
    }
    if (count == 0)
        cout << "0";
    else
        cout << count << " "<< old_name << " " << young_name;


    return 0;
}