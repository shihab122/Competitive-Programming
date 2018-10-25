#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    map<int,int>mp;
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            int k=i^j;
            if(i!=j&&i+j>k&&k<=n&&k>i&&k>j){
               // cout<<i<<" "<<j<<" "<<k<<endl;
                    ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
