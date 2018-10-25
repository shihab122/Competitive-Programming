#include<bits/stdc++.h>
#define inf 100000000

using namespace std;
typedef long long ll;


int main(){
    int t;
    //freopen("in.txt", "w", stdout);
    ll dp[100001];
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int amount, n;
        ll ans1, ans2 = inf;
        scanf("%d", &amount);
        scanf("%d", &n);
        for(int i = 0; i <= 100000; i++)
            dp[i] = inf;
        dp[0] = 0;
        ll x;
        for(int i = 0; i < n; i++){
            scanf("%lld", &x);
            for(int j = 100000; j >= 1; j--){
                if(j >= x) dp[j] = min(dp[j], dp[j - x] + 1);
            }
        }
        for(int i = amount; i <= 100000; i++)
            if(ans2 > dp[i]){
                ans1 = i, ans2 = dp[i];
                break;
            }

        printf("%lld %lld\n", ans1, ans2);
    }

    return 0;
}
