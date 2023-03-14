#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n; cin >> n;
    int MaxSold = 0, MaxPrice = 0;
    string MaxS, MaxP;
    for (int i = 0; i < n; i++){
        string s1; int a, b;
        cin >> s1 >> a >> b;
        if (b >= MaxSold){
            MaxSold = b;
            MaxS = s1;
        }
        if (a * b >= MaxPrice){
            MaxPrice = a * b;
            MaxP = s1;
        }
    }
    cout << MaxS << " " << MaxSold << endl;
    cout << MaxP << " " << MaxPrice << endl;

    return 0;
}