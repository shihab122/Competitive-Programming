#include<bits/stdc++.h>

using namespace std;

int main(){
    //freopen("in.txt", "w", stdout);
    int coin[] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
    long long dp[30001];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;

    for(int i = 0; i <= 10; i++){
        for(int j = coin[i]; j <= 30001; j++)
            dp[j] += dp[j - coin[i]];
    }

    double x;
    while(scanf("%lf", &x)){
        if(x == 0.00) break;
        int y = (int) floor(x * 100.0 + 0.5);
        printf("%6.2lf%17lld\n", x, dp[y]);
    }

    return 0;
}
