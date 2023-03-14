//
// Created by shineahead on 2022-10-03.
//
#include<iostream>
using namespace std;
int jia, yi;

int main()
{
    int N; cin >> N;
    for (int i = 0; i < N; i++)
    {
        int jia1, jia2, yi1, yi2;
        cin >> jia1 >> jia2 >> yi1 >> yi2;
        int sum = jia1 + yi1;
        //两个人都猜对的情况
        if (jia2 == sum && yi2 == sum)
            continue;
        //乙喝酒的情况
        else if (jia2 == sum && yi2 != sum)
            yi++;
        //甲喝酒的情况
        else if (jia2 != sum && yi2 == sum)
            jia++;
    }
    cout << jia << " " << yi << endl;
    return 0;
}