#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll a,b;
    cin>>a>>b;
    ll ans = (a/2) + (a%2);
    if(b <= ans) {
        ans = (b*2)-1;
        cout<<ans<<endl;
    }
    else{
        ans = b - ans;
        cout<<ans*2<<endl;
    }


    return 0;
}
