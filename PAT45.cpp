//
// Created by shineahead on 2022-10-03.
//
#include<iostream>
#include<algorithm>
using namespace std;
int a[100001], b[100001], c[100001], count, i;
////思想：先把数据读入到数组a，b中，然后对a数组排序
////然后挨个比较数组a，b内的元素，如果对应位置的元素是相同的，说明该元素可能是主元
////还要接着判断i元素之前的元素是否有大于b[i]的
bool findIf(int val)
{
    return val > a[i];
}
int main()
{
    int N; cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    //对数组a排序
    sort(a, a + N);
    int max = -1;
    for (i = 0; i < N; i++)
    {
        if (b[i] > max) max = b[i];
        if (a[i] == b[i] && b[i] == max)
            c[::count++] = a[i];
    }
    cout << ::count << endl;

    for (i = 0; i < ::count; i++)
    {
        if (i != ::count-1)
            cout << c[i] << " ";
        else
            cout << c[i];
    }
    //末尾需要再加一个换行
    cout << endl;
    return 0;
}