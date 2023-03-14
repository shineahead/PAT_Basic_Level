#include<iostream>
#include<algorithm>
using namespace std;
///该题的关键在于输入的数字长度会远远超过long long型
///判断是否是回文数
bool judge(string s)
{
    string ss = s;
    reverse(s.begin(), s.end());
    if (ss == s)
        return true;
    else
        return false;
}

int main()
{
    string n; cin >> n;
    int cnt = 0;
    if (judge(n)){
        cout << n << " is a palindromic number." << endl;
        return 0;
    }
    while (true)
    {
        int carry = 0;  ///进位
        string reverse_n = n, ans;
        reverse(reverse_n.begin(), reverse_n.end());

        cout << n << " + " << reverse_n << " = ";
        ///对每个字符进行处理，要记得有进位
        for (int i = n.size() - 1; i >= 0; i--){
            int t = n[i] - '0' +  reverse_n[i] - '0' + carry;
            if (t >= 10) carry = t / 10;
            else carry = 0;
            ans += to_string(t - carry * 10);
        }
        if (carry != 0) ans += to_string(carry);
        reverse(ans.begin(), ans.end());
        n = ans;
        cout << n << endl;

        if (judge(n)) break;
        cnt++;
        if (cnt == 10) break;
    }
    if (cnt == 10)
        cout << "Not found in 10 iterations." << endl;
    else
        cout << n << " is a palindromic number." << endl;

    return 0;
}
