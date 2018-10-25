#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, w = 0;
        scanf("%d", &n);
        int price[n + 1], weight[n + 1];

        for(int i = 1; i <= n; i++) scanf("%d %d", &price[i], &weight[i]);
        int m;
        scanf("%d", &m);
        int vc[m];

        for(int i = 0; i < m; i++){
            scanf("%d", &vc[i]);
            w = max(w, vc[i]);
        }
        long long dp[n + 1][w + 1];

        for(int i = 0; i <= n ;i++){
            for(int j = 0; j <= w; j++){
                if(i == 0 || j == 0) dp[i][j] = 0;
                else if(j >= weight[i]) dp[i][j] = max(dp[i - 1][j], price[i] + dp[i - 1][j - weight[i]]);
                else dp[i][j] = dp[i - 1][j];
            }
        }

        long long ans = 0;
        for(int i = 0; i < m; i++)
            ans += dp[n][vc[i]];

        printf("%lld\n", ans);


    }

    return 0;
}
