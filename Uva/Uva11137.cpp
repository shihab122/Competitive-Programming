#include<bits/stdc++.h>

using namespace std;

int main(){
    int coin[22];
    for(int i = 1; i <= 21; i++)
        coin[i] = i * i * i;

    long long dp[10001];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for(int i = 1; i <= 21; i++){
        for(int j = coin[i]; j <= 10000; j++)
            dp[j] += dp[j - coin[i]];
    }

    int x;
    while(scanf("%d", &x) != EOF){
        printf("%lld\n", dp[x]);
    }

    return 0;
}
