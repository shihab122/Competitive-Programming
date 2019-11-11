#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n, x, y, d, ans = 0;
        scanf("%lld %lld %lld %lld", &n, &x, &y, &d);
        ll u = abs(1 - y), v = abs(x - y);
        if((u % d != 0 && v % d != 0) || n <= d) printf("-1\n");
        else{
            if(v % d == 0) ans = v / d;
            else{
                ll p = abs(1 - x);
                if(p % d != 0) ans++;
                ans += p / d;
                ans += u / d;
            }
            printf("%lld\n", ans);
        }
    }

    return 0;
}
