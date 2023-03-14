//
// Created by shineahead on 2022-09-28.
//
#include<iostream>
#include<vector>
#include <limits>
#include<algorithm>

using namespace std;
//插入排序
void insert_sort(int arr[], int len)
{
    for (int i = 1; i < len; i++)
    {
        //拿到当前元素
        int key = arr[i];
        //当前元素的前一个元素
        int pre_index = i - 1;
        while (pre_index >= 0 && key < arr[pre_index])
        {
            //由于按照升序排列，所以key < arr[pre_index]
            //把比key大的元素往后挪一个位置
            arr[pre_index + 1] = arr[pre_index];
            pre_index--;
        }
        arr[pre_index + 1] = key;
    }
}
//归并排序
void merge(vector<int> &arr, int front, int mid, int end)
{
    //左右两个子数组是已经排好序了
    vector<int> LeftSubArr(arr.begin() + front, arr.begin() + mid + 1);
    vector<int> RightSubArr(arr.begin() + mid + 1, arr.begin() + end + 1);
    //在数组最后插入int最大的值，方便比较
    LeftSubArr.push_back(numeric_limits<int>::max());
    RightSubArr.push_back(numeric_limits<int>::max());
    int inxLeft = 0, inxRight = 0;
    //把两个排好序的子数组放到一起形成有序的大数组
    //一共需要有end个数排序
    for (int i = front; i <= end; i++)
    {
        if (LeftSubArr[inxLeft] < RightSubArr[inxRight])
        {
            arr[i] = LeftSubArr[inxLeft];
            inxLeft++;
        }
        else
        {
            arr[i] = RightSubArr[inxRight];
            inxRight++;
        }
    }
}

void mergeSort(vector<int> &arr, int front, int end)
{
    if (front >= end)
        return;
    int mid = (front + end) / 2;
    mergeSort(arr, front, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, front, mid, end);
}


int main()
{
    vector<int> initial, target, A;
    int N; cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp; cin >> temp;
        initial.push_back(temp);
    }
    for (int i = 0; i < N; i++)
    {
        int temp; cin >> temp;
        target.push_back(temp);
    }
    A = initial; bool f = false;
    //先进行插入排序
    for (int i = 1; i < N; i++)
    {
        sort(A.begin(), A.begin() + i + 1);
        if (equal(A.begin(), A.begin()+N, target.begin()))
        {
            cout << "Insertion Sort\n";
            sort(A.begin(), A.begin() + i + 2);
            f = true;
            break;
        }
    }
    //如果不是插入排序
    if ( !f )
    {
        cout << "Merge Sort\n";
        A = initial;
        for (int i = 2; i < N; i *= 2)
        {
            for (int j = 0; j < N; j += i)
                sort(A.begin()+j, j+i < N ? A.begin()+j+i : A.begin()+N);
            if (equal(A.begin(), A.begin()+N, target.begin()))
            {
                //进行下一次排序
                for (int j = 0; j < N; j += i*2)
                    sort(A.begin()+j, j+i*2 < N ? A.begin()+j+i*2 : A.begin()+N);
                break;
            }
        }
    }

    for(int i=0;i<N;++i)//输出下一趟排序结果
        printf("%s%d",i>0?" ":"",A[i]);
    return 0;
}