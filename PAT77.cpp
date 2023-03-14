#include<iostream>
#include<set>
#include<numeric>
using namespace std;

int main()
{
    int teacher[101], n, fullMark;
    multiset<int> mark[101];
    cin >> n >> fullMark;

    for (int i = 0; i < n; i++){
        cin >> teacher[i];
        for (int j = 0; j < n - 1; j++){
            int temp; cin >> temp;
            if (temp >= 0 && temp <= fullMark)
                mark[i].insert(temp);
        }
    }
    for (int i = 0; i < n; i++){
        mark[i].erase(mark[i].begin());
        mark[i].erase(--mark[i].end());

        double sum = accumulate(mark[i].begin(), mark[i].end(), 0);
        sum = sum / (double)mark[i].size();
        sum = (sum + teacher[i]) * 0.5;
        if (sum >= ((int)sum + 0.5))
            cout << (int)sum + 1 << endl;
        else
            cout << (int)sum << endl;
    }

    return 0;
}