//
// Created by shineahead on 2022-10-12.
//
#include<iostream>
#include<set>
#include<map>
////map����������couple��������ҵ����ޣ���ô�ͽ���ɾ��
////set�������洢�ַ�������Ϊset���������Զ��������û���ظ���Ԫ��
////����������set�������洢�ַ�������Ϊ��������size��С���ı�֮�������ĵ�ַ�����½��з���
////������ѭ����һ��ɾ����Ԫ����ô֮ǰ�ĵ�������ֵָ�����ĵ�ַ��

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
        //����couple��������ȥ�ҵ�ǰԪ����û�����
        auto pos1 = couple.find(i);
        if (pos1 != couple.end())
        {
            string str = couple[i];
            //����set���������ҵ�ǰԪ�ص���ż�Ƿ����
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