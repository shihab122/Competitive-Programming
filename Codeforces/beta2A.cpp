#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n;
    vector<string>a;
    vector<int>b;
    map<string,int>d,e;
    for(int i=0;i<n;i++){
        string c;
        cin>>c>>m;
        d[c]+=m;
        a.push_back(c);
        b.push_back(m);
    }
    int mx=0;
    for(int i=0;i<n;i++){
        mx=max(mx,d[a[i]]);
    }
    for(int i=0;i<n;i++){
        e[a[i]]+=b[i];
        if(e[a[i]]>=mx&&d[a[i]]==mx){
            cout<<a[i]<<endl;
            return 0;
        }
    }
    return 0;
}
