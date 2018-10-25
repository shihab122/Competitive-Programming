#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string,int>mp;
    int len;
    cin>>len;
    string str;
    cin>>str;
    int val = 0;
    string ans;
    for(int i=0;i<str.size()-1;i++){
        string st;
        st.push_back(str[i]);
        st.push_back(str[i+1]);
        mp[st]+=1;
        if(mp[st] > val) ans = st,val = mp[st];
    }
    cout<<ans<<endl;
    return 0;
}
