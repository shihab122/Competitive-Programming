#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n,a;
    cin>>n>>a;
    vector<ll>b;
    for(int i=0;i<n;i++){
       ll c;
       cin>>c;
       b.push_back(c);
    }
    ll mi=b[0],mx=b[0];
    for(int i=1;i<b.size();i++){
        mi=min(mi,b[i]);
        mx=max(mx,b[i]);
    }
    if(a==1) cout<<mi<<endl;
    else if(a==2){
        mx=max(b[0],b[n-1]);
        mx=max(mx,mi);
        cout<<mx<<endl;
    }
    else cout<<mx<<endl;
    return 0;
}
