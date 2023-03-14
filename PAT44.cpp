//
// Created by shineahead on 2022-10-02.
//
#include<iostream>
#include<cctype>
#include<map>
#include<string>
#include<cstring>
using namespace std;
map<string, int> d1 = {make_pair("tret", 0), make_pair("jan", 1),
                       make_pair("feb", 2),make_pair("mar", 3),
                       make_pair("apr", 4),make_pair("may", 5),
                       make_pair("jun", 6), make_pair("jly", 7),
                       make_pair("aug", 8), make_pair("sep", 9),
                       make_pair("oct", 10), make_pair("nov", 11),
                       make_pair("dec", 12)};
map<int, string> n1 = {make_pair(0, "tret"), make_pair(1,"jan"),
                       make_pair(2,"feb"),make_pair(3,"mar"),
                       make_pair(4,"apr"),make_pair(5,"may"),
                       make_pair(6,"jun"), make_pair(7,"jly"),
                       make_pair(8,"aug"), make_pair(9,"sep"),
                       make_pair(10,"oct"), make_pair(11,"nov"),
                       make_pair(12,"dec")};
map<string, int> d2 = {make_pair("0", 100), make_pair("tam", 1),
                       make_pair("hel", 2),make_pair("maa", 3),
                       make_pair("huh", 4),make_pair("tou", 5),
                       make_pair("kes", 6), make_pair("hei", 7),
                       make_pair("elo", 8), make_pair("syy", 9),
                       make_pair("lok", 10), make_pair("mer", 11),
                       make_pair("jou", 12)};
map<int, string> n2 = {make_pair(0, "0"), make_pair(1,"tam"),
                       make_pair(2,"hel"),make_pair(3,"maa"),
                       make_pair(4,"huh"),make_pair(5,"tou"),
                       make_pair(6,"kes"), make_pair(7,"hei"),
                       make_pair(8,"elo"), make_pair(9,"syy"),
                       make_pair(10,"lok"), make_pair(11,"mer"),
                       make_pair(12,"jou")};
int main()
{
    int N; cin >> N;
    getchar();
    for(int i = 0; i < N; i++)
    {
        string req; getline(cin, req);
        //输入的是数字
        if (isdigit(req[0]))
        {
            int num = stoi(req);
            ////假如输入13仅用输出tam
            if (num < 13)
                cout << n1[num] << endl;
            else
            {
                cout << n2[num / 13];
                num = num % 13;
                if (num != 0)
                    cout << " " << n1[num];
                cout << endl;
            }
        }
        //如果是字母
        else
        {
            if (req.size() > 3)
            {
                int res = 0;
                res += d2[req.substr(0, 3)] * 13;
                res += d1[req.substr(4, 3)];
                cout << res << endl;
            }
            else
            {
                bool flag = false;
                for (auto it = d1.begin(); it != d1.end(); it++)
                    if (req == it->first)
                        flag = true;
                if (flag)
                    cout << d1[req] << endl;
                else
                    cout << d2[req] * 13 << endl;
            }

        }
    }
    return 0;
}