#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll mx = 4000000;
    ll ans = 0, x = 1, y = 2;
    while(ans <= mx){
        if(y % 2 == 0) ans += y;
        ll temp = y;
        y = y + x, x = temp;
    }
    printf("%lld\n", ans);

    return 0;
}
