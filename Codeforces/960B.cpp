#include<bits/stdc++.h>
#define ll long long
#define ii pair<long long,long long>
#define vec vector<long long>

using namespace std;


int main(){
    ll n,k1,k2;
    ll sum2=0;
    vector<ll>vc;
    priority_queue<ll>pq;
    scanf("%lld %lld %lld",&n,&k1,&k2);
    k1+=k2;
    ll arr1[n+1],arr2[n+2];
    for(int i=1;i<=n;i++){
        scanf("%lld",&arr1[i]);
        arr1[i]=arr1[i];
    }
    for(int i=1;i<=n;i++){
        scanf("%lld",&arr2[i]);
        arr2[i]=arr2[i];
        ll y=abs(arr1[i]-arr2[i]);
        pq.push(y);
    }
    while(1){
        if(k1==0) break;
        else{
            ll yt=pq.top();
            ll cx=0;
            k1--;
            if(yt>0)yt=yt-1;
            else yt=yt+1;
            pq.pop();
            pq.push(yt);
        }
    }
    ll sum=k1;
    while(!pq.empty()){
        ll vx=pq.top();
        sum+=(ll)(vx*vx);
        pq.pop();
    }
    printf("%lld\n",sum);
    return 0;
}
