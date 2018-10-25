#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int m,mx=-1;
        cin>>m;
        while(m--){
            int a;
            cin>>a;
            mx=max(a,mx);
        }
        cout<<"Case "<<i<<": "<<mx<<endl;
    }
    return 0;
}
