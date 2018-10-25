#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll a,m;
    scanf("%lld %lld",&a,&m);
    while(m--){
        if(a%10==0) a/=10;
        else a--;
    }
    printf("%lld\n",a);

    return 0;
}
