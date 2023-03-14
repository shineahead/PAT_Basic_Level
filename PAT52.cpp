//
// Created by shineahead on 2022-10-05.
//
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
////基本做法：创立一个vector<string> v[3]的容器数组，然后把每个符号不断添加进对应的容器
////好处在于：可以随便访问对应的符号，假如用string来处理一整个字符串会非常麻烦，这个点很关键

int main()
{
    const string out = "Are you kidding me? @\\/@";
    vector<string> v[3];

    for (int i = 0; i < 3; i++)
    {
        string s; getline(cin, s);
        int pos1 = 0, pos2 = 0;
        while (true)
        {
            pos1 = s.find('[', pos1);
            pos2 = s.find(']', pos2);
            //说明该字符串已经遍历完毕
            if (pos1 == -1 || pos2 == -1)
                break;
            v[i].push_back(s.substr(pos1 + 1, pos2 - pos1 - 1));
            //继续寻找下一个[,]的位置
            pos1++; pos2++;
        }
    }
    int k; cin >> k; while(k--)
    {
        int a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;
        //--为了使索引一致
        a1 -= 1; a2 -= 1; a3 -= 1; a4 -= 1; a5 -= 1;
        if(a1 >= v[0].size() || a2 >= v[1].size() || a3 >= v[2].size() || a4 >= v[1].size() || a5 >= v[0].size()) {
            cout << out << '\n';
        } else {
            cout << v[0][a1] << '(' << v[1][a2] << v[2][a3] << v[1][a4] << ')' << v[0][a5] << '\n';
        }
    }

    return 0;
}