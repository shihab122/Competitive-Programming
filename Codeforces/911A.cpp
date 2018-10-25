#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll a;
    ll mn=1e9,mn2=1e9;
    //cout<<mn<<endl;
    scanf("%lld",&a);
    map<ll,ll>mp;
    for(ll i=1;i<=a;i++){
        ll b;
        scanf("%lld",&b);
//        cout<<mp[b]<<endl;
        //if(mn==1) continue;
        if(mp[b]>0&&mn2==b){
            ll n=i-mp[b];
            mn=min(n,mn);
            mp[b]=i;
            mn2=min(mn2,b);
        }
        else if(mp[b]>0&&mn2>b){
            mn=i-mp[b];
            mp[b]=i;
            mn2=min(mn2,b);
        }
        else mp[b]=i;
    }
    printf("%lld\n",mn);
    return 0;
}
