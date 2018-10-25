#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
map<ll,int>mp;

int main(){
    int n;
    scanf("%d",&n);
    ll arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
        mp[arr[i]]=1;
    }

    for(int i=0;i<n;i++){
        ll x=arr[i],flag=0;
        for(int j=1;j<n;j++){
            if(x%3 == 0 && mp[x/3] == 1) x/=3;
            else if(mp[x*2]==1) x*=2;
            else {
                flag =1;
                break;
            }
        }
        if(flag==0){
            printf("%lld ",arr[i]);
            x=arr[i];
            for(int j=1;j<n;j++){
                if(x%3 == 0 && mp[x/3] == 1) printf("%lld ",x/3),x/=3;
                else if(mp[x*2]==1) printf("%lld ",x*2),x*=2;
            }
            return 0;
        }
    }

    return 0;
}
