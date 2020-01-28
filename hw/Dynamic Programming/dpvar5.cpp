#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,amount;
    scanf("%lld%lld",&n,&amount);
    int coin[n+1];
    for(int i=1;i<=n;i++) scanf("%d",&coin[i]);
    int dp[amount+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<=amount;i++){
    for(int j=1;j<=n;j++){
  //      for(int i=1;i<=amount;i++){
            if(i>=coin[j]&&dp[i-coin[j]]>=1)
                dp[i]+=dp[i-coin[j]];
            cout<<i<<" "<<coin[j]<<" "<<dp[i]<<endl;
        }
    }
    cout<<dp[amount]<<endl;

    return 0;
}
