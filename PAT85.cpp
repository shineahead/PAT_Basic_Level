#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
struct node{
    int rank = 0;
    int cnt = 0;    ///人数
    double score = 0;  ///分数
};

bool cmp(const pair<string, struct node>& aa, const pair<string, struct node>& bb)
{
    auto a = aa.second, b = bb.second;
    return (a.score != b.score ? a.score > b.score : (a.cnt != b.cnt ? a.cnt < b.cnt : aa.first < bb.first));
}

int main()
{
    int n; cin >> n;
    map <string, node> m;
    for (int i = 0; i < n; i++){
        string ID, school;
        double score;
        cin >> ID >> score >> school;
        if (ID[0] == 'B')
            score = score / 1.5;
        else if (ID[0] == 'T')
            score = score * 1.5;

        for (int j = 0; j < school.length(); j++)
            if (isupper(school[j]))
                school[j] += 32;
        m[school].cnt++;
        m[school].score += score;
    }

    vector<pair<string, struct node>> v(m.begin(), m.end());
    for (auto &i: v)
        i.second.score = int((i.second.score));
    sort(v.begin(), v.end(), cmp);

    int rank = 1;
    v[0].second.rank = 1;
    cout << v.size() << endl;
    for (auto i = v.begin(); i != v.end(); i++){
        if (i != v.begin() && (*i).second.score == (i-1)->second.score)
            (*i).second.rank = (i-1)->second.rank;
        else
            i->second.rank = rank;
        cout << i->second.rank;
        cout << " " << (*i).first << " " << (*i).second.score << " " << (*i).second.cnt << endl;
        rank++;
    }

    return 0;
}