#include<bits/stdc++.h>

using namespace std;

int main(){
    int k;
    scanf("%d", &k);

    string s;
    cin>>s;
    vector<char> vc;
    map<char, int> mp;

    sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++){
        if(mp[s[i]] == 0) vc.push_back(s[i]);
        mp[s[i]]++;
    }

    bool flag = false;
    string ans = "";
    for(int i = 0; i < vc.size(); i++){
        if(flag) break;
        if(mp[vc[i]] % k != 0){
            flag = true;
            break;
        }
        else mp[vc[i]] /= k;
        for(int j = 0; j < mp[vc[i]]; j++)
            ans.push_back(vc[i]);
    }

    string temp = ans;
    for(int i = 0; i < k - 1 && !flag; i++)
        ans += temp;

    if(flag) printf("-1\n");
    else cout<<ans<<endl;

    return 0;
}
