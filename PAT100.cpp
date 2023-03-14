#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n, m, cnt = 0; string Max = "9999999", MaxG = "9999999", id1, id2;
    map<string, int> ID;
    cin >> n;
    for (int i = 0; i < n; i++){
        string temp; cin >> temp;
        ID[temp] = 1;
        string sub = temp.substr(6, 7);
        ///sub的数字小于Max
        if (sub.compare(Max) < 0){
            Max = sub;
            id1 = temp;
        }
    }
    cin >> m;
    for (int i = 0; i < m; i++){
        string t; cin >> t;
        if (ID[t] == 1) cnt++;
        ///最年长来宾
        string sub = t.substr(6, 7);
        if (sub.compare(MaxG) < 0){
            MaxG = sub;
            id2 = t;
        }
    }
    cout << cnt << endl;
    if (cnt == 0) cout << id2 << endl;
    else cout << id1 << endl;

    return 0;
}