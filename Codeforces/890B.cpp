#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0,c=0;
    vector<int>a;
    map<int,int>mp,mp1;
    cin>>n;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        if(mp[b]==0){
            cnt++;
            mp[b]=1;
        }
        a.push_back(b);
    }
    int sz=a.size()-1;
    for(int i=sz;i>=0;i--){
        if(mp1[a[i]]==0){
            c++;
            mp1[a[i]]++;
        }
        if(c==cnt){
            cout<<a[i]<<endl;
            return 0;
        }
    }
    return 0;
}
