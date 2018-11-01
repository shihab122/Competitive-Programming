#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll mx = 1e9 + 1;

ll mark[mx / 32 + 1];

bool check(ll n, ll pos){
    return (bool) (n & (1LL << pos));
}

ll Set(ll n, ll pos){
    n = n | (1LL << pos);
    return n;
}

void sieve(){
    ll rt = sqrt(mx);
    printf("2\n");
    ll cnt = 1;
    for(ll i = 3; i <= rt; i += 2){
        if(check(mark[i / 64], i & 63) == 0){
            if((++cnt) % 500 == 1) printf("%lld\n", i);
            for(ll j = i * i; j < mx; j += i * 2LL)
                mark[j / 64LL] = Set(mark[j / 64LL], j & 63LL);
        }
    }

    rt++;
    if(rt % 2 == 0) rt++;
    for(ll i = rt; i < mx; i += 2LL)
        if(check(mark[i / 64LL], i & 63LL) && (++cnt) % 500 == 1)
            printf("%lld\n", i);

}

int main(){
    sieve();

    return 0;
}
