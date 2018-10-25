#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n, h, a, b, k;
    scanf("%lld %lld %lld %lld %lld", &n, &h, &a, &b, &k);
    for(int i = 0; i < k; i++){
        long long t1, f1, t2, f2;
        long long ans = 0;
        scanf("%lld %lld %lld %lld", &t1, &f1, &t2, &f2);
        ans += abs(t1 - t2);
        if(t1 == t2) {
            ans += abs(f1 - f2);
        }
        else if(f1 >= a && f1 <= b){
            ans += abs(f1 - f2);
        }
        else if(f2 >= a && f2 <= b) ans += abs(f1 - f2);
        else if(f2 > b && f1 > b){
            int mn = min(f1, f2);
            int mx = max(f1, f2);
            ans += abs(mn - b) + abs(mx - b);
        }
        else if(f2 < a && f1 < a){
            int mn = min(f1, f2);
            int mx = max(f1, f2);
            ans += abs(mx - a) + abs(mn - a);
        }
        else{
            int mx = max(f1, f2);
            int mn = min(f1, f2);
            int x = abs(mn - a);
            int y = abs(mx - b);
            ans += x + y;
            ans += abs(a - b);

        }
        printf("%lld\n", ans);
    }

    return 0;
}
