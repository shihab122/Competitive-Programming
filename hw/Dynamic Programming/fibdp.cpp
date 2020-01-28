#include<bits/stdc++.h>

using namespace std;

long long dp[101];

long long fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    else{
        dp[n]=fibo(n-1)+fibo(n-2);
        return dp[n];
    }

}

int main(){
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    long long cn= fibo(n);
    cout<<cn<<endl;
    return 0;
}
