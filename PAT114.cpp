#include<iostream>
#include<cmath>
using namespace std;

bool prime(int val)
{
    if (val == 1) return false;
    if (val == 2) return true;
    for (int i = 2; i <= sqrt(val); i++)
        if (val % i == 0)
            return false;
    return true;
}

int main()
{
    string src; cin >> src;
    bool f = true;
    for (int i = 0; i < 8; i++)
    {
        cout << src << " ";
        if (prime(stoi(src))) cout << "Yes" << endl;
        else {
            cout << "No" << endl;
            f = false;
        }
        src = src.substr(1);
    }
    if (f) cout << "All Prime!" << endl;

    return 0;
}