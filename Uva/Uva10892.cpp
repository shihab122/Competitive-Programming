#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return ((a * b) / gcd(a, b));
}

int main(){
    ll n;
    vector<ll>vc;
    while(scanf("%lld", &n) && n){
        vc.clear();
        ll cnt = 0;
        for(ll i = 1; i * i <= n; i++){
            if(n % i == 0) vc.push_back(i);
            if(n % i == 0 && (n / i) != i) vc.push_back(n / i);
        }

        for(int i = 0; i < vc.size(); i++){
            for(int j = i; j < vc.size(); j++){
                if(lcm(vc[i], vc[j]) == n) cnt++;
            }
        }
        printf("%lld %lld\n", n, cnt);
    }

    return 0;
}
