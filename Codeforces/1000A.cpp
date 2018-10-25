#include<bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin>>a;
    map<string, int>mp;
    for(int i = 0; i < a; i++){
        string s;
        cin>>s;
        mp[s]++;
    }

    int ans = 0;
    for(int i = 0; i < a; i++){
        string s;
        cin>>s;
        if(mp[s] > 0) mp[s]--;
        else ans++;
    }

    cout<<ans<<endl;



    return 0;
}
