#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int val; cin >> val;
        bool f = true;
        for (int j = 1; j <= 10; j++){
            int sum = val * val * j;
            string s_sum = to_string(sum);
            string s_val = to_string(val);
            string sub_str = s_sum.substr(s_sum.size() - s_val.size(), s_val.size());

            if (sub_str == s_val){
                cout << j << " " << sum << endl;
                f = false;
                break;
            }
        }
        if (f) cout << "No" << endl;
    }


    return 0;
}
