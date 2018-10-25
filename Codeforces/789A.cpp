#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n,k,cnt=0,a=0,c=0;
    cin>>n>>k;
    for(long long i=0;i<n;i++){
        ll b;
        cin>>b;
        cnt+=b/k;
    }
    cout<<(cnt/2)+(cnt%2)<<endl;
    return 0;
}
