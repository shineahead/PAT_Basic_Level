#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[200];
    a['A'] = 1;
    a['B'] = 2;
    a['C'] = 3;
    a['D'] = 4;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 4; j++){
            string temp; cin >> temp;
            if (temp.find('T') != -1){
                cout << a[temp[0]];
            }
        }
    }

    return 0;
}