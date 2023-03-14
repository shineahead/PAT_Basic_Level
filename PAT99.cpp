#include<iostream>
#include<cmath>
using namespace std;

bool prime(int val)
{
    if (val == 2)   return true;
    if (val <= 1)   return false;

    for (int i = 2; i <= sqrt(val); i++)
        if (val % i == 0)
            return false;
    return true;
}

int SexPrime(int val)
{
    int a = val - 6, b = val + 6;

    if (prime(a) && prime(val))
        return a;
    else{
        if (prime(b) && prime(val))
            return b;
        return -1;
    }
}

int main()
{
    int n; cin >> n;
    if (SexPrime(n) != -1)
        cout << "Yes" << endl << SexPrime(n) << endl;
    else{
        cout << "No" << endl;
        for (int i = n + 1; ;i++)
            if (SexPrime(i) != -1){
                cout << i << endl;
                break;
            }
    }

    return 0;
}