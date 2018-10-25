#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n;
    scanf("%d",&n);

    ll arr[n+1];
    map<ll,ll>mp;
    vector<ll>vc;

    for(int i=1;i<=n;i++){
        scanf("%lld",&arr[i]);
        if(mp[arr[i]]==0){
            mp[arr[i]]=i;
        }
        else{
            while(mp[arr[i]]>0){
                int indx=mp[arr[i]];
                mp[arr[i]]=0;
                arr[indx]=0;
                arr[i]*=2;
            }
                mp[arr[i]]=i;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(arr[i]!=0) ans++,vc.push_back(arr[i]);
    }
    printf("%d\n",ans);
    for(int i=0;i<vc.size();i++){
        printf("%lld ",vc[i]);
    }
    printf("\n");

    return 0;
}
