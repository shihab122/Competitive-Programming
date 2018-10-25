#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n,a,b;
    scanf("%lld %lld %lld",&n,&a,&b);

    ll sum=0;
    ll arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
        sum+=arr[i];
    }
    sort(arr+1,arr+n);
    ll ans=0;
    for(int i=n-1;i>0;i--){
        ll lol = (a*arr[0])/sum;
        if(lol >= b) break;
        ans++;
        sum-=arr[i];
    }
    printf("%lld\n",ans);

    return 0;
}
