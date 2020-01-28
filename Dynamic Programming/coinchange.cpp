#include<bits/stdc++.h>

using namespace std;

int main(){
    //noc=number of coins
    int taka,noc;
    //cout<<INT_MAX<<endl;
    scanf("%d",&taka);
    int dp[taka+10],mn=taka;

    scanf("%d",&noc);
    int coin[noc];
    for(int i=1;i<=taka;i++) dp[i]=INT_MAX;

    for(int i=0;i<noc;i++) scanf("%d",&coin[i]);

    dp[0]=0;
    for(int i=0;i<noc;i++){
        for(int j=coin[i];j<=taka;j++){
            dp[j]=min(dp[j],dp[j-coin[i]]+1);
        }
        mn=min(dp[taka],mn);
    }
    printf("%d\n",mn);
    return 0;
}
