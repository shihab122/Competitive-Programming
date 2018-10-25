#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n,m;
    cin>>n>>m;
    if(n==0||n>27) cout<<m<<endl;
    else if(n==1&&m%2==0) cout<<0<<endl;
    else{
        ll a=pow(2,n);
        a=m%a;
        cout<<a<<endl;
    }

    return 0;
}
