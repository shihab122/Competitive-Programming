#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n, s;
    scanf("%lld %lld", &n, &s);
    ll ans = s / n;
    ll an = ans * n;
    if(an != s) ans++;
    printf("%lld\n", ans);

    return 0;
}
