#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,ans=0;
    cin>>n;
    int x=sqrt(n)+1;
   // cout<<x<<endl;
    map<int,int>mp;
    for(int i=2;i<=x&&i!=n;i++){
        if(n%i==0&&mp[i]==0) ans++,mp[i]=1;
        if(mp[n/i]==0&&n%i==0) ans++,mp[n/i]=1;
       // cout<<i<<" "<<n/i<<" "<<mp[n/i]<<" "<<ans<<endl;
    }
    ans++;
    cout<<ans<<endl;

    return 0;
}
