#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long x, y, a, b;
        scanf("%lld %lld %lld %lld", &x, &y, &a, &b);
        long long d = a * 2;
        long long mn = min(x, y), tot = x + y, ans = 0;
        if (d < b) ans += tot * a;
        else {
            ans += b * mn;
            mn *= 2;
            ans += (tot - mn) * a;
        }
        printf("%lld\n", ans);

    }
    return 0;
}
