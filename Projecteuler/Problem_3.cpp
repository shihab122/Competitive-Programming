#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll prove(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return i;
    }
    return n;
}

int main(){
    ll n = 600851475143L;
    while(true){
        ll ans = prove(n);
        if(ans < n) n /= ans;
        else{
            printf("%lld\n", ans);
            break;
        }
    }

    return 0;
}
