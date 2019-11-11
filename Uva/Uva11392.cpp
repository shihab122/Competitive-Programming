#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
bool visit[1000010];

void solve(ll k){
    ll x = 0LL, u = 0LL, v, finalx = 1000000LL, finaly = 1000000LL;
    for(ll i = 0; i <= (finalx + finaly); i++){
        x *= 10LL;
        x += 3LL;
        x %= k;
        ll y = x;
        u++, v = 0LL;
        while(v <= (finalx + finaly)){
            y = y % k;
            if(y == 0 || visit[y]){
                finalx = min(finalx, u), finaly = min(finaly, v);
                break;
            }
            visit[y] = true;
            v++;
            y *= 10;
        }
        /*if(y == 0LL){
            finalx = min(finalx, u), finaly = min(finaly, v);
            break;
        }*/
    }
    printf("%lld %lld %lld\n", finalx + finaly, finalx, finaly);
}

int main(){
    ll k;
    //freopen("in.txt", "w", stdout);
    while(scanf("%lld", &k)){
        memset(visit, false, sizeof(visit));
        solve(k);
    }

    return 0;
}
