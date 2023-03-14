#include<iostream>
#include<cstring>
using namespace std;
////思想：把读入的字符串用sscanf函数和sprintf函数读入到a，b两个字符串中去，然后挨着判断他们对应的字符是不是相等的


int main()
{
    int n, useful = 0; cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        //注意这个flag必须要放在循环体里面，因为这样才能使每次flag的值恢复false
        bool flag = false;
        char a[105], b[105];
        cin >> a; double x = 0;
        sscanf(a, "%lf", &x);
        sprintf(b, "%.2lf", x);

        //判断a,b对应的字符是不是相等的
        for (int j = 0; j < strlen(a); j++)
        {
            if (a[j] != b[j])
            {
                flag = true;
                break;
            }
        }
        //判断是否在-1000到1000的范围内
        if ((x > 1000 || x < -1000) && !flag) flag = true;

        if (flag)
            printf("ERROR: %s is not a legal number\n", a);
        else
        {
            useful++;
            sum += x;
        }
    }
    if (useful == 0)
        cout << "The average of 0 numbers is Undefined\n";
    else if (useful == 1)
        //注意在useful==1的时候，输出的是number而不是numbers
        printf("The average of 1 number is %.2lf\n", sum);
    else
        printf("The average of %d numbers is %.2lf\n", useful, sum / useful);

    return 0;
}