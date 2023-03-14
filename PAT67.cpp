//
// Created by shineahead on 2022-10-15.
//
#include<iostream>
using namespace std;

int main()
{
    string s; int n, con = 0;
    cin >> s >> n;
    getchar();
    while (true)
    {
        string temp; getline(cin, temp);
        if (temp == "#") break;
        if (temp != s){
            con++;
            cout << "Wrong password: " << temp << endl;
        }
        else{
            cout << "Welcome in" << endl;
            break;
        }
        if (con == n){
            cout << "Account locked" << endl;
            break;
        }
    }


    return 0;
}