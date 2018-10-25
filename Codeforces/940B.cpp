#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n,k,a,b;
   // cout<<10000000000000000000<<endl;
    scanf("%lld%lld%lld%lld",&n,&k,&a,&b);
    ll sum1=(n-1)*a;
    if(k>1&&n>1){
        ll sum2=1e18,d=0;
        ll c=0,t;
        while(n>1&&n>=k){
            c+=n%k;
            t=c*a;
            d++;
            n/=k;
            t+=(n-1)*a;
            t+=d*b;
            sum2=min(t,sum2);
            sum2=min(sum1,sum2);
        }
        ll p=0;
        if(n>1){
            p+=(n-1)*a;
            p+=d*b;
            p+=c*a;
            sum2=min(p,sum2);
            sum2=min(sum1,sum2);
        }
        cout<<sum2<<endl;
    }
    else printf("%lld\n",sum1);
    return 0;
}
