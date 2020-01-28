#include<bits/stdc++.h>


using namespace std;

int main(){
    int n,amount;
    scanf("%d%d",&n,&amount);


    /*int coin[n+1],dp[amount+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<=n;i++) scanf("%d",&coin[i]);
    for(int i=1;i<=n;i++){
        for(int j=amount;j>0;j--){
            if(j>=coin[i]&&dp[j-coin[i]])
                dp[j]=1;
        }
    }
    printf("%d\n",dp[amount]);*/


    int coin[n+1],dp[n+1][amount+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        scanf("%d",&coin[i]);
        dp[i][0]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=amount;j++){
            if(dp[i-1][j]||(j>=coin[i]&&dp[i-1][j-coin[i]])){
                    dp[i][j]=1;
            }
        }
    }
    printf("%d\n",dp[n][amount]);


    return 0;
}
