#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n,mx=20000;
    scanf("%d%d",&m,&n);
    map<int,int>mp;
    vector<int>v;
    for(int i=0;i<m;i++){
        int y;
        cin>>y;
        mp[y]++;
        v.push_back(y);
    }
    for(int i=0;i<v.size();i++){
        int mn=0;
        for(int j=0;j<=n;j++){
            int x=v[i]+j;
            if(mp[x]>0) mn+=mp[x];
           // cout<<mn<<" "<<x<<endl;
        }
        mn=m-mn;
        mx=min(mn,mx);
       // cout<<mx<<endl;
    }
    cout<<mx<<endl;

    return 0;
}
