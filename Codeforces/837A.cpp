#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,ans=0;
    cin>>n;
    string g;
    getline(cin,g);
    map<char,int>a;
    for(int i=0;i<g.size();i++){
        cout<<g[i]<<endl;
        if(a[g[i]+32]==1||a[g[i]-32]==1) continue;
        if(g[i]==' ') continue;
        a[g[i]]=1;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
