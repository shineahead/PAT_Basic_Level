#include<iostream>
using namespace std;
/// S:83, t:116, r:114, i:105, n:110, g:103
const int N = 10000 + 10;
int c[N];

int main()
{
    string src; cin >> src;
    int order[] = {83, 116, 114, 105, 110, 103};
    for (int i = 0; i < src.size(); i++)
        c[src[i]]++;

    while (true)
    {
        bool f = false;
        for (int i = 0; i < 6; i++){
            if (c[order[i]] > 0){
                cout << char(order[i]);
                c[order[i]]--;
                f = true;
            }
        }
        if (!f) break;
    }

    return 0;
}