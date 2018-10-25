#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int zeros(ll y){
    ll p = 5;
    ll r = 0;
    while(y >= p){
        r += (y / p);
        p *= 5;
    }
    return r;
}

int solve(ll x){
    int y = 0;
    ll lo = 0, hi = 1000000000LL;
    while(lo <= hi){
        ll mid = (lo + hi) / 2;
        ll f = zeros(mid);
        if(f >= x) hi = mid - 1 ;
        else lo = mid + 1;
        if(f == x) y = 1;
    }
    if(y == 0) return -1;
    return lo;
}

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        ll x;
        scanf("%lld", &x);
        ll ans = solve(x);
        if(ans != -1) printf("Case %d: %lld\n", tes, ans);
        else printf("Case %d: impossible\n", tes);
    }

    return 0;
}
