#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string, string> mp;
    int n, m;
    scanf("%d %d", &n, &m);
    string a, b;
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        if(a.size() > b.size()) mp[a] = b, mp[b] = b;
        else mp[a] = a, mp[b] = a;
    }
    vector<string> ans;
    for(int i = 0; i < n; i++){
        cin>>a;
        ans.push_back(mp[a]);
    }
    for(int i = 0; i < n; i++) cout<<ans[i]<<" ";
    cout<<endl;

    return 0;
}
