#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,amount;
    scanf("%d%d",&n,&amount);
    long long dp[amount+1],coin[n];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=0;i<n;i++) scanf("%lld",&coin[i]);
    for(int i=0;i<n;i++){
        for(int j=1;j<=amount;j++) if(j>=coin[i]) dp[j]+=dp[j-coin[i]]; //dp[j]|=dp[j-coin[i]];
   // for(int k=0;k<=amount;k++) cout<<dp[k]<<" ";
   // cout<<endl;
    }
    //cout<<dp[amount]<<endl;
    if(dp[amount]>=1) cout<<"Yes"<<" "<<dp[amount]<<endl;
    else cout<<"No"<<endl;
    return 0;
}
