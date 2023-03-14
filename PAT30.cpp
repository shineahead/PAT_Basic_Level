//
// Created by shineahead on 2022-09-25.
//
#include<iostream>
#include<algorithm>
using namespace std;
int N, p;
long long val[100004];

//这道题坑的地方在于容易想当然的认为，最小值m应该取整个
// 数列的最小值，这样的想法有问题，因为要求使数列中
// 最大值M大于等于最小值的p倍，找出最长数列

void quicksort(int left, int right)
{
    int i, j;
    long long temp, t;
    if (left > right)
        return;

    temp = val[left];
    i = left;
    j = right;
    while (i != j)
    {
        //这两个循环的顺序不能交换
        while (val[j] >= temp && j > i)
            j--;
        while (val[i] <= temp && j > i)
            i++;
        if (i < j)
        {
            t = val[i];
            val[i] = val[j];
            val[j] = t;
        }
    }

    val[left] = val[i];
    val[i] = temp;

    quicksort(left, i-1);
    quicksort(j+1, right);
    return;
}

int binary_search(int begin, int end, long long elem)
{
    int mid = (begin + end) / 2;
    if (val[mid] <= elem && val[mid+1] > elem || mid == end)
        return mid;
    else if (val[mid] > elem)
        return binary_search(begin, mid - 1, elem);
    else
        return binary_search(mid + 1, end, elem);
}

bool cmp(int a, int b)
{
    return a < b;
}

int main()
{
    int flag, max = 0;
    long long min;
    cin >> N >> p;
    for (int i = 0; i < N; i++)
        cin >> val[i];

    //quicksort(0, N-1);
    //这里使用quicksort排序会超时，所以采用sort来进行排序捏
    sort(val, val+N, cmp);
    for (int i = 0; i < N; i++)
    {
        min = val[i];
        flag = binary_search(0, N-1, p * min) + 1 -i;
        if (flag > max)
            max = flag;
    }
    cout << max << endl;
    return 0;
}