#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    vector<pair<ll,ll> >vc;
    int n,m;
    scanf("%d %d",&n,&m);
    int ans[n+1];
    map<pair<ll,ll>,int>mp;
    ll x;
    for(int i=0;i<n;i++){
        scanf("%lld",&x);
        vc.push_back(make_pair(x,i+1));
    }
    sort(vc.begin(),vc.end());
    ll u,v;
    for(int i=0;i<m;i++){
        scanf("%lld %lld",&u,&v);
        mp[make_pair(u,v)]=1;
        mp[make_pair(v,u)]=1;
    }
    int flag=0;
    for(int i=n-1;i>=0;i--){
        flag=0;
        for(int j=i-1;j>=0;j--){
            if(mp[make_pair(vc[i].second,vc[j].second)]==0 &&  vc[i].first > vc[j].first){
                ans[vc[i].second]=vc[j].second;
                flag++;
            }
        }
        ans[vc[i].second] = flag;
    }
    for(int i=1;i<=n;i++) printf("%d ",ans[i]);
    printf("\n");
    return 0;
}
