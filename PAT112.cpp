#include<iostream>
using namespace std;
const int N = 10000 + 10;

int main()
{
    int n, threshold, MAX = -1, a[N];
    cin >> n >> threshold;

    bool f1 = true, f2 = true;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++){
        MAX = max(MAX, a[i]);
        if (a[i] > threshold && f2){
            cout << "[" << i << ", ";
            f1 = false; f2 = false;
        }
        if (!f2 && a[i] <= threshold){
            cout << i - 1 << "]" << endl;
            f2 = true;
        }
        ///当最后一个数据是异常数据的时候不会输出下一半括号，所以需要补上
        if (i == n - 1 && !f2)  cout << i << "]" << endl;
    }
    if (f1) cout << MAX << endl;

    return 0;
}