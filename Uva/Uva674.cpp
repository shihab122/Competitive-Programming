#include<bits/stdc++.h>

using namespace std;

int main(){
    int coin[] = {1, 5, 10, 25, 50};
    int dp[7490];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;

    for(int i = 0; i < 5; i++){
        for(int j = coin[i]; j <= 7489; j++){
            dp[j] += dp[j - coin[i]];
        }
    }

    int x;
    while(scanf("%d", &x) != EOF){
        printf("%d\n", dp[x]);
    }

    return 0;
}
