#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        ll u = (c / 2) + (c % 2);
        ll v = c - u;
        u = (u * a) - (v * b);
        printf("%lld\n", u);
    }

    return 0;
}
