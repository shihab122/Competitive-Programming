#include<bits/stdc++.h>

using namespace std;

int main(){
    int weight;
    cin>>weight;
    int dp[weight+1][weight+1];
    int nop;
    cin>>nop;
    int product[nop+1],avai[nop+1];
    for(int i=1;i<=nop;i++){
        cin>>product[i]>>avai[i];
    }
    for(int i=0;i<=nop;i++){
        for(int j=0;j<=weight;j++){
            if(i==0||j==0) dp[i][j]=0;
            else if(j>=product[i]) dp[i][j]=max(dp[i-1][j],avai[i]+dp[i-1][j-product[i]]);
            else dp[i][j]=dp[i-1][j];
           // cout<<dp[i][j]<<endl;
        }
    }
    cout<<dp[nop][weight]<<endl;
//    solve(nop,weight);
    vector<int>sol;
    while(nop>0&&weight>0){
        if(dp[nop][weight]!=dp[nop-1][weight]){
            sol.push_back(product[nop]);
            weight-=product[nop];
        }
        nop-=1;
    }
    for(int i=0;i<sol.size();i++) cout<<sol[i]<<endl;
    return 0;
}
