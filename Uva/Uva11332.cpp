#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll sumofdigits(ll x){
    ll sum = 0;
    while(x > 0){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main(){
    ll a;
    while(scanf("%lld", &a) && a){
        while(a > 9){
            a = sumofdigits(a);
        }
        printf("%lld\n", a);
    }

    return 0;
}
