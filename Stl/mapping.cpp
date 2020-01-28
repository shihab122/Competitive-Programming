#include<bits/stdc++.h>
#define sc(a) cin>>a
using namespace std;

int main(){
    cout<<iy/ix<<endl;
    map<string,int>mp;
    map<string,int>:: iterator it;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        mp[a]=0;
    }
    for(int i=0;i<n;i++){
        string a;
        int b;
        cin>>a>>b;
        int c=mp[a];
        c+=b;
        mp[a]=c;
    }
    for(it=mp.begin();it!=mp.end();it++) cout<<it->first<<" "<<it->second<<endl;

    return 0;
}
