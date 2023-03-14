#include<iostream>
#include<cmath>
using namespace std;
const double INF = 1000000000;

int main()
{
    int n; cin >> n;
    double chap = INF, fool = -1;
    int chapID, foolID;
    for (int i = 0; i < n; i++){
        int id, t1, t2;
        cin >> id >> t1 >> t2;
        double res = pow(t1, 2) + pow(t2, 2);
        if (res < chap){
            chapID = id;
            chap = res;
        }
        if (res > fool){
            foolID = id;
            fool = res;
        }
    }
    printf("%04d %04d", chapID, foolID);
    return 0;
}