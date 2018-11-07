#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
vector<int>vec;

ll cal(ll x){
    ll ans = 0;
    int num = vec.size();
    for(int i = 0; i < ( 1 << num ); i++){
        ll now = 1,flag = 1;
        for(int j = 0; j < num; j++){
            if((i >> j) & 1){
                now *= vec[j];
                flag *= -1;
            }
        }
        ans += flag * (x / now);
    }
    return ans;
}


int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll x, p, k;
        scanf("%lld %lld %lld", &x, &p, &k);
        vec.clear();
        for(ll i = 2; i * i <= p; i++){
            if(p % i == 0) vec.push_back(i);
            while(p % i == 0) p /= i;
        }
        if(p > 1) vec.push_back(p);
        k += cal(x);
        ll l = 1, r = 1e12;
        ll ans = -1;
        while(l <= r){
            ll m = (r + l) / 2;
            if(cal(m) >= k) ans = m, r = m - 1;
            else l = m + 1;
        }
        printf("%lld\n", ans);
    }

    return 0;
}
