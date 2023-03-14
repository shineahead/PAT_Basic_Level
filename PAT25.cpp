#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    //next[1000] = 00100表示01000地址元素的下一个地址为01000
    int first, temp, data[100001], list[100001], next[100001], n, k;
    cin >> first >> n >> k;
    //读入数据
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        cin >> data[temp] >> next[temp];
    }
    int sum = 0;
    //把数据按照顺序排列在list数组里面，list数组记录每个元素的地址
    while (first != -1)
    {
        list[sum++] = first;
        first = next[first];
    }
    //反转数据
    //sum - sum % k表示需要反转的数据组数
    for (int i = 0; i < (sum - sum % k); i += k)
        reverse(list + i, list + i + k);
    //注意这里是sum-1而不是n-1，因为有可能题目中会有无效数据，即没有接入链表的结点，自己单个
    for (int i = 0; i < sum - 1; i++)
        printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
    //最后一行数据单独输出，因为-1和其他的格式不一样
    printf("%05d %d -1\n", list[sum-1], data[list[sum-1]]);
    return 0;
}