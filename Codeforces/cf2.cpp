#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,m,c=1e9 + 7,d=0,d1=0,c1=1e9 + 7;
    long long a,b,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        d=max(a,d);
        c=min(b,c);
    }
    cin>>m;
    for(long long i=0;i<m;i++){
        cin>>a>>b;
        ans=max(ans,a-c);
        ans=max(ans,d-b);
    }
    cout<<ans<<endl;
    return 0;
}
