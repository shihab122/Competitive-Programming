#include<bits/stdc++.h>

using namespace std;
typedef long long ll;




int main(){
    int t;
    freopen("in.txt", "w", stdout);
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        ll a, b, ans = 0;
        scanf("%lld %lld", &a, &b);
        printf("Case %d:", tes);
        a--, b--;
        while(a % 3 > 0 && b >= a) a++, ans++;
        while(b % 3 > 0 && b >= a) b--, ans++;
        if(b >= a){
            b = b - a + 1;
            if(b % 3 != 0) ans += ((b % 3) - 1);
            b = (b / 3) * 2;
            ans += b;
        }
        printf(" %lld\n", ans);
    }

    return 0;
}
