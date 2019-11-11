#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        ll l, r, d;
        scanf("%lld %lld %lld", &l, &r, &d);
        ll u , v;
        if(l > d) printf("%lld\n", d);
        else{
            u = r / d;
            v = u * d;
            if(v > r) printf("%lld\n", v);
            else{
                u++;
                v = u * d;
                printf("%lld\n", v);
            }
        }
    }

    return 0;
}
