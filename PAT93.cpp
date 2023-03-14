#include<iostream>
using namespace std;
int arr[300];
bool f[300];

int main()
{
    string a, b, res;
    getline(cin, a);
    getline(cin, b);
    for (char &m: a) arr[m]++;
    for (char &m: b) arr[m]++;

    for (char &m: a)
        if (arr[m] > 0 && !f[m])
        {
            cout << m;
            f[m] = true;
        }
    for (char &m: b)
        if (arr[m] > 0 && !f[m])
        {
            cout << m;
            f[m] = true;
        }
    cout << endl;

    return 0;
}