#include<bits/stdc++.h>

using namespace std;

int main(){
    string a="aeiou";
    string b="13579";
    map<char,int>mp;
    for(int i=0;i<5;i++) mp[a[i]]=1;
    for(int i=0;i<5;i++) mp[b[i]]=2;
    string c;
    cin>>c;
    int ans=0;
    for(int i=0;i<c.size();i++){
        if(mp[c[i]]==1) ans++;
        else if(mp[c[i]]==2) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
