#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){

        int n, w, sum = 0, x, y;
        scanf("%d %d", &n, &w);
        int arr1[n], arr2[n];

        for(int i = 0; i < n; i++){
            scanf("%d %d %d", &arr2[i], &x, &arr1[i]);
            sum += (arr1[i] * x);
        }

        w -= sum;
        if(w == 0) printf("Case %d: 0\n", tes);
        else if(w < 0) printf("Case %d: Impossible\n", tes);
        else{
            long long dp[w + 1];
            memset(dp, 0, sizeof(dp));
            for(int i = 0; i < n; i++){
                for(int j = arr1[i]; j <= w; j++){
                    dp[j] = max(dp[j], arr2[i] + dp[j - arr1[i]]);
                }
            }

            printf("Case %d: %lld\n",tes, dp[w]);
        }
    }

}
