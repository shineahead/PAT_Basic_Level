//
// Created by shineahead on 2022-09-29.
//
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double N; cin >> N;
    char c; cin >> c;
    double col = N;
    double row = round(N / 2);

    for (int i = 0; i < row; i++)
    {
        if (i == 0 || i == row - 1)
            for (int j = 0; j < col; j++)
                cout << c;
        else
            for (int j = 0; j < col; j++)
            {
                if (j == 0 || j == col - 1)
                    cout << c;
                else
                    cout << " ";
            }
        cout << endl;
    }


    return 0;
}