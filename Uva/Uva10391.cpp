#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    vector<string>vc, ans;
    map<string, int>mp;
    while(cin>>a){
        vc.push_back(a);
        mp[a] = 1;
    }
    string x, y;
    for(int j = 0; j < vc.size(); j++){
        for(int i = 0; i < vc[j].size(); i++){
            x = vc[j].substr(0, i);
            y = vc[j].substr(i, vc[j].size()-i);
            if(mp[x] == 1 && mp[y] == 1){
                ans.push_back(vc[j]);
                break;
            }
        }
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++) cout<<ans[i]<<endl;
    return 0;
}
