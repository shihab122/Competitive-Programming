#include<bits/stdc++.h>

using namespace std;

int main(){
    //freopen("in.txt", "w", stdout);
    int coin[] = {1, 5, 10, 25, 50};
    long long dp[30001];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;

    for(int i = 0; i <= 4; i++){
        for(int j = coin[i]; j <= 30000; j++)
            dp[j] += dp[j - coin[i]];
    }

    int x;
    while(scanf("%d", &x) != EOF){
        if(dp[x] > 1) printf("There are %lld ways to produce %d cents change.\n", dp[x], x);
        else printf("There is only 1 way to produce %d cents change.\n", x);
    }

    return 0;
}
