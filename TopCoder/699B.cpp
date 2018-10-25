#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

class LastDigit{
public:
    ll sum(ll x){
        ll y = x;
        while(x > 0){
            y += x / 10;
            x /= 10;
        }
        return y;
    }

    ll BS(ll s){
        ll lo = 1, hi = s + 10;
        while(lo <= hi){
            ll mid = (hi + lo) / 2;
            ll l = sum(mid);
            if(l == s) return mid;
            else if(l < s) lo = mid + 1;
            else hi = mid - 1;
        }
        return -1;
    }
    ll findX(ll S){
        ll ans = BS(S);
        return ans;
    }

};
/*
ll BS(ll s){
    ll lo = 1, hi = s + 10;
    while(lo <= hi){
        ll mid = (hi + lo) / 2;
        ll l = sum(mid);
        if(l == s) return mid;
        else if(l < s) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

int main(){
    ll s;
    scanf("%lld", &s);
    ll ans = BS(s);
    printf("%lld\n", ans);
    return 0;
}
*/
