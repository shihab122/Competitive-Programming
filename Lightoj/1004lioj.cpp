#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
long long arr[210][210];
long long dp[210][210];
int N, n;

long long solve(int r, int c){
    if(arr[r][c] == -1) return 0;
    else if(dp[r][c] != -1) return dp[r][c];

    else{

        long long ans = arr[r][c], x = 0, y = 0, z = 0;

        if(r >= n) y = solve(r + 1, c), z = solve(r + 1, c - 1);

        else y = solve(r + 1, c), z = solve(r + 1, c + 1);
        ans = ans +  max(y, z);
        dp[r][c] = ans;
        return dp[r][c];
    }

}

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        n;
        scanf("%d", &n);
        if(n == 1){
            ll x;
            scanf("%lld", &x);
            printf("Case %d: %lld\n", tes, x);
            continue;
        }

        memset(arr, -1, sizeof(arr));
        memset(dp, -1, sizeof(dp));

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++)
                scanf("%lld", &arr[i][j]);
        }

        int l = n - 1;
        N = (2 * n) - 1;
        for(int i = n + 1; i <= N; i++){
            for(int j = 1; j <= l; j++)
                scanf("%lld", &arr[i][j]);
            l--;
        }

        long long ans = solve(1, 1);
        printf("Case %d: %lld\n", tes, ans);
    }


    return 0;
}

