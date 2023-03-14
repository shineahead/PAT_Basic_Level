//
// Created by shineahead on 2022-10-27.
//
#include<iostream>
using namespace std;

int main()
{
    int t, k;
    cin >> t >> k;
    for (int i = 0; i < k; i++)
    {
        int n1, n2, b, token;
        cin >> n1 >> b >> token >> n2;

        if (t == 0) {
            cout << "Game Over." << endl;
            break;
        }
        if (token > t) {
            cout << "Not enough tokens.  Total = " << t << "." << endl;
            continue;
        }
        //赌小的情况
        if (b == 0){
            if (n2 < n1){
                t += token;
                cout << "Win " << token << "!  " << "Total = " << t << "." << endl;
            }
            else{
                t -= token;
                cout << "Lose " << token << ".  " << "Total = " << t << "." << endl;
            }
        }
        else if (b == 1){
            if (n2 > n1){
                t += token;
                cout << "Win " << token << "!  " << "Total = " << t << "." << endl;
            }
            else{
                t -= token;
                cout << "Lose " << token << ".  " << "Total = " << t << "." << endl;
            }
        }
    }


    return 0;
}