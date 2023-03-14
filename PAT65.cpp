//
// Created by shineahead on 2022-10-12.
//
#include<iostream>
#include<set>
#include<map>
////map容器来储存couple，如果查找到夫妻，那么就将其删除
////set容器来存储字符串，因为set容器可以自动排序而且没有重复的元素
////这里用两个set容器来存储字符串，因为当容器的size大小被改变之后，容器的地址会重新进行分配
////所以在循环中一旦删除了元素那么之前的迭代器的值指向错误的地址了

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, m; cin >> n;
    map<string, string> couple;
    set<string> se;
    set<string> se2;

    for (int i = 0; i < n; i++){
        string s1, s2;
        cin >> s1 >> s2;
        couple.insert(make_pair(s1, s2));
    } cin >> m;
    for (int i = 0; i < m; i++){
        string s1; cin >> s1;
        se.insert(s1);
    }

    se2 = se;
    for (const auto & i : se)
    {
        //先在couple容器里面去找当前元素有没有配对
        auto pos1 = couple.find(i);
        if (pos1 != couple.end())
        {
            string str = couple[i];
            //再在set容器里面找当前元素的配偶是否存在
            if (se2.find(str) != se2.end())
            {
                se2.erase(i);
                se2.erase(str);
            }
        }
    }

    cout << se2.size() << endl;
    for (auto i = se2.begin(); i != se2.end(); i++)
    {
        if (i != se2.begin()) cout << " ";
        cout << *i;
    }
    return 0;
}