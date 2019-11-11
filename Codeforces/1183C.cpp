#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int q;
    scanf("%d", &q);
    while(q--){
        ll k, n, a, b;
        scanf("%lld %lld %lld %lld", &k, &n, &a, &b);
        if(k / b < n) printf("-1\n");
        else if(k / b == n && k % a == 0) printf("-1\n");
        else{

        }
    }

    return 0;
}
