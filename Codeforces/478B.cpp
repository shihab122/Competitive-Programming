#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n, m;
    scanf("%lld %lld", &n, &m);
    ll u = n / m;
    ll v = n % m;
    ll w = m - v;
    //cout<<u<<" "<<v<<" "<<w<<endl;
    ll f = ((u * (u + 1)) / 2) * v;
    f += ((u * (u - 1)) / 2) * w;
    ll s = n - m;
    s = (s * (s + 1)) / 2;
    cout<<f<<" "<<s<<endl;
    return 0;
}
