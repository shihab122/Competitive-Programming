#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll sod(ll n){
    ll ans = 1;
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            if(i == n / i)
                ans += i;
            else ans += i + (n / i);
        }
    }
    return ans;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        if(n < 2)
            printf("0\n");
        else{
            ll ans = sod(n);
            printf("%lld\n", ans);
        }
    }


    return 0;
}
