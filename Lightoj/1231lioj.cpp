#include<bits/stdc++.h>
#define mod 100000007

using namespace std;

int n, k;
int value[100], coin[100];
int dp[100][1005];

int bottomup(int i, int sum){
    if(sum == 0) return 1;

    if(i == -1) return 0;

    if(dp[i][sum] != -1) return dp[i][sum];

    int ans = 0;

    for(int j = 0; j <= coin[i]; j++){
        int x = j * value[i];
        x = sum - x;
        if(x < 0) break;

        ans += bottomup(i - 1, x);
        ans = ans % mod;
    }
    return dp[i][sum] = ans;

}

int topbottom(int i, int sum){
    if(sum == k) return 1;

    if(i == n) return 0;
    int ans = 0;

    if(dp[i][sum] != -1) return dp[i][sum];

    for(int j = 0; j <= coin[i]; j++){
        int x = j * value[i];
        x += sum;
        if(x > k) break;
        ans += topbottom(i + 1, x);
        ans = ans % mod;
    }
    return dp[i][sum] = ans;
}

int main(){
    int t;
    scanf("%d", &t);

    for(int tes = 1; tes <= t; tes++){
        scanf("%d %d", &n, &k);
        for(int i = 0; i < n; i++)
            scanf("%d", &value[i]);

        for(int i = 0; i < n; i++)
            scanf("%d", &coin[i]);

        memset(dp, -1, sizeof(dp));

        printf("Case %d: %d\n", tes, bottomup(n - 1, k));
    }


    return 0;
}
