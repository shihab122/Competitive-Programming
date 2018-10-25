#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    ll n, m, k, l, per = 0;
    scanf("%lld %lld %lld %lld", &n, &m, &k, &l);
    k += l;
    per = 1 + (k - 1) / m;
    k = per * m;
    if(k <= n) printf("%lld\n", per);
    else printf("-1\n");

    return 0;
}
