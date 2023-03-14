#include<iostream>
#include<algorithm>
using namespace std;

int m, x, y;
void print(double v)
{
    if (v == m)
        cout << " Ping";
    else if (v < m)
        cout << " Gai";
    else if (v > m)
        cout << " Cong";
}

int main()
{
    cin >> m >> x >> y;
    bool f = false;
    for (int i = 99; i >= 10; i--){
        ///i, j, k表示甲，乙，丙
        string temp = to_string(i);
        reverse(temp.begin(), temp.end());
        int j = stoi(temp);
        double k = (double)abs(i - j) / x;
        if (abs(k * y - j) < 1e-6){
            cout << i;
            print(i); print(j); print(k);
            f = true;
            break;
        }
    }
    if (!f) cout << "No Solution" << endl;

    return 0;
}