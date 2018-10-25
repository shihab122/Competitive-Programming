#include<bits/stdc++.h>

using namespace std;
int vc[10][1000001];

int solve(int x){
    if(x < 10) return x;
    int y = 1;
    while(x > 0){
        if(x % 10) y *= (x % 10);
        x /= 10;
    }
    return solve(y);
}

int main(){
/*    for(int i = 1; i < 10; i++)
        memset(vc[i], 0, sizeof(vc[i]));
*/
    for(int i = 1; i <= 1000000; i++){
        int x = solve(i);
        vc[x][i] = 1;
    }
    for(int i = 1; i < 10; i++){
        vc[i][0] = 0;
        for(int j = 1; j <= 1000000; j++)
            vc[i][j] += vc[i][j - 1];
    }
    int q;
    scanf("%d", &q);
    while(q--){
        int l, r, k, cnt = 0;
        scanf("%d %d %d", &l, &r, &k);
        cnt = (vc[k][r] - vc[k][l - 1]);
        printf("%d\n", cnt);
    }

    return 0;
}
