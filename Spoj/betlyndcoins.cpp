#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll dp[10000000];

ll func(ll x){
    if(x<10000000&&dp[x]!=0) return dp[x];
    if(x<=2) return x;
   // cout<<x<<endl;
    ll y=func(x/2);
    ll z=func(x/3);
    ll t=func(x/4);
    t=y+z+t;
    ll p=max(x,t);
    if(x<10000000&&p<10000000) dp[x]=p;
    return p;
}


int main(){
    ll n;
    memset(dp,0,sizeof(dp));
    //func(10000000);
    for(int i=0;i<10;i++)
    {
        scanf("%lld",&n);
        ll a;
        a=func(n);
        printf("%lld\n",a);
    }

    return 0;
}
