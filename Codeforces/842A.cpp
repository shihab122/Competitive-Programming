#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    double l,r,x,y,k;
    cin>>l>>r>>x>>y>>k;
    for(int i=x;i<=y;i++){
        if(i*k>=l&&i*k<=r){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
