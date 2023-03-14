#include <stdio.h>

int main(){
    int a, b, flag[200000] = {0}, n, m, i, j, num[100000], cnt = 0, t, alive[10] = {0}, flag1 = 0;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &n, &m);
    int number[n][m];
    for(i = 0;i < n;i++)
        for(j = 0;j < m;j++)
            scanf("%d", &number[i][j]);
    flag[a] = 1;
    flag[b] = 1;
    num[cnt++] = a;
    num[cnt++] = b;
    for(i = 0;i < m;i++){
        for(j = 0;j < n;j++){
            if(alive[j] == 1) continue;
            t = 0;
            while(t < cnt && flag[number[j][i] + num[t]] == 0) t++;
            if(t == cnt || flag[number[j][i]] == 1){
                printf("Round #%d: %d is out.\n", i + 1, j + 1);
                alive[j] = 1;
            }else{
                flag[number[j][i]] = 1;
                num[cnt++] = number[j][i];
            }
        }
    }
    for(i = 0;i < n;i++){
        if(alive[i] == 0 && flag1 == 0){
            printf("Winner(s): %d",i + 1);
            flag1 = 1;
        }else if(alive[i] == 0){
            printf(" %d",i + 1);
        }
    }
    if(flag1 == 0) printf("No winner.");
    return 0;
}
