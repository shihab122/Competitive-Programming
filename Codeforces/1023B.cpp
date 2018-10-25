#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    ll a, b;
    scanf("%lld %lld", &a, &b);
    ll c = a * 2;
    if(c <= b){
        printf("0\n");
        return 0;
    }
    ll z = 0;
    if(b % 2 == 0 && b <= a) z = -1;
    b = b / 2;
    c = a - b;
    c = min(c, b);
    c += z;
    c = max(c, 0LL);
    printf("%lld\n", c);

    return 0;
}
