#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll a, b;
        scanf("%lld %lld", &a, &b);
        ll x = abs(a - b);
        ll ans = x / 5LL;
        x %= 5LL;
        ans += x / 2LL;
        x %= 2LL;
        ans += x;
        printf("%lld\n", ans);
    }
    return 0;
}

