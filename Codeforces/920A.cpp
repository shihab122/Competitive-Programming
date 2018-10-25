#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,ans=0,cnt=0;
        cin>>n>>k;
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<k;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
//        int x=INT_MAX,y=INT_MAX;
        for(int i=0;cnt<n;i++){

            for(int j=0;j<v.size();j++){
               // cout<<v[j];
                int x=v[j]-i;
                int y=v[j]+i;
               // cout<<x<<" "<<y<<endl;
                if(x>0||y<=n){
                    if(mp[x]==0&&x>0) cnt++,mp[x]=1;
                    if(mp[y]==0&&y<=n) cnt++,mp[y]=1;
                    //mp[x]=1;
                    //mp[y]=1;
                  //  cout<<v[j]<<endl;
                }
            //cout<<cnt<<endl;
            }
            ans++;
          //  if(i==6) break;
        }

    cout<<ans<<endl;
    }
    return 0;
}
