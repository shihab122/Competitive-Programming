#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    int a,ans=720,flag=0;
    cin>>a;
    vector<int>vc;
    for(int i=0;i<a;i++){
        int c;
        cin>>c;
        vc.push_back(c);
    }
    for(int i=0;i<vc.size();i++){
        int amount=0;
        for(int j=i+1;j<vc.size();j++){
            amount+=vc[j];
            //cout<<amount<<endl;
            ans=min(ans,abs((amount-(360-amount))));
            flag=1;
        }
    }
    if(flag==0) ans=360;
    cout<<ans<<endl;

    return 0;
}
