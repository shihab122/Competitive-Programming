#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int n, m;
        scanf("%d %d", &n, &m);

        long long dp[m + 1], mx = 100000007;
        int arr[n];

        memset(dp, 0, sizeof(dp));
        dp[0] = 1;

        for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

        for(int i = 0; i < n; i++){
            for(int j = arr[i]; j <= m; j++)
                dp[j] = (dp[j] + dp[j - arr[i]]) % mx;
        }

        printf("Case %d: ", tes);
        long long ans = dp[m] % mx;
        printf("%lld\n", ans);

    }

    return 0;
}
