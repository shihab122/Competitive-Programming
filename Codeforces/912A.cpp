#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll y,b,y1,g1,b1,ans=0;
    cin>>y>>b;
    cin>>y1>>g1>>b1;
    ll y2=0,b2=0;
    y2+=y1*2;
    y2+=g1;
    b2+=b1*3;
    b2+=g1;
    if(y<y2) ans+=y2-y;
    if(b<b2) ans+=b2-b;
    cout<<ans<<endl;
    return 0;
}
