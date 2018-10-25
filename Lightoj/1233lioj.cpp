#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int n, m;
        scanf("%d %d", &n, &m);

        int arr1[n + 1], arr2[n + 1];
        int dp[m + 1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;

        for(int i = 1; i <= n; i++) scanf("%d", &arr1[i]);
        for(int i = 1; i <= n; i++) scanf("%d", &arr2[i]);

        int c[m + 1];
        for(int i = 1; i <= n; i++){
            memset(c, 0, sizeof(c));
            for(int j = arr1[i]; j <= m; j++){
                if(dp[j] == 0 && dp[j - arr1[i]] == 1 && c[j - arr1[i]] < arr2[i]){
                    dp[j] = 1;
                    c[j] = c[j - arr1[i]] + 1;
                }
            }
        }

        int cnt = 0;
        for(int i = 1; i <= m; i++)
            if(dp[i] != 0) cnt++;

        printf("Case %d: %d\n", tes, cnt);
    }

    return 0;
}
