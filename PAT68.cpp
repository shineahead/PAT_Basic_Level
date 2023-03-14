//
// Created by shineahead on 2022-10-22.
//
#include<iostream>
#include<unordered_map>
using namespace std;
int pos[8][2] = {{-1, 0}, {-1, -1}, {-1, 1}, {1, 0},
                 {1, -1}, {1, 1}, {0, -1}, {0, 1}};

int main()
{
    int m, n, tol, count = 0;
    cin >> m >> n >> tol;
    unordered_map<int, int> res;
    int a[m][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            res[a[i][j]]++;
        }
    }
    int posx, posy;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bool flag = true;
            //遍历八个方向的元素
            for (int k = 0; k < 8; k++)
            {
                int x1 = i + pos[k][0];
                int y1 = j + pos[k][1];
                if (x1 < 0 || y1 < 0 || x1 >= n || y1 >= m) continue;
                if (abs(a[i][j] - a[x1][y1]) <= tol || res[a[i][j]] > 1)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                posx = i + 1;
                posy = j + 1;
                count++;
            }
        }
    }
    if (count == 0) cout << "Not Exist" << endl;
    else if (count == 1) printf("(%d, %d): %d", posy, posx, a[posx-1][posy-1]);
    else cout << "Not Unique" << endl;
    return 0;
}