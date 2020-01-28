#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int coin[n];
    for(int i=0;i<n;i++){
        scanf("%d",&coin[i]);
    }
    int limits;
    scanf("%d",&limits);
    int dp[limits+1];
    dp[0]=0;
    for(int i=1;i<=limits;i++) dp[i]=INT_MAX;
    for(int i=0;i<n;i++){
        for(int num=coin[i];num<=limits;num++)
            dp[num]=min(dp[num],dp[num-coin[i]]+1);
    }
    printf("%d\n",dp[limits]);
    return 0;
}
