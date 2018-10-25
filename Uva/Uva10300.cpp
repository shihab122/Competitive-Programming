#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        ll sum = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            ll a, b, c;
            scanf("%lld %lld %lld", &a, &b, &c);
            if(b > 0) sum += (ll)(a * c);
        }
        printf("%lld\n", sum);
    }

    return 0;
}
