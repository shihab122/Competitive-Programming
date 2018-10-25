#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    map<int,int>mp,mp1;
    for(int i = 0;i < n;i++){
        int a,b;
        cin>>a>>b;
        if(mp[a] >= 1) cnt += mp[a];
        if(mp1[b] >= 1) cnt += mp1[b];
        mp[b]++;
        mp1[a]++;
    }
    cout<<cnt<<endl;

    return 0;
}
