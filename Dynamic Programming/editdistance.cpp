#include<bits/stdc++.h>
#define memo(a,b) memset(a,b,sizeof(a))
using namespace std;

int dp[200+10][200+10];

int solve(string a,string b){
    for(int i=0;i<=a.size();i++){
        for(int j=0;j<=a.size();j++){
            if(i==0||j==0) dp[i][j]=0;
            else if(a[i-1]==b[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j-1],max(dp[i-1][j],dp[i][j-1]));
        }
    }
    return dp[a.size()][b.size()];

}


int main(){
    string a,b;
    cin>>a>>b;
    memo(dp,-1);
    printf("%d\n",solve(a,b));

    return 0;
}
