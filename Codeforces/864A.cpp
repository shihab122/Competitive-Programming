#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,c=0;
    cin>>n;
    map<int,int>b;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(b[a]==0){
            c++;
            v.push_back(a);
        }
        b[a]++;
    }
    if(c!=2) cout<<"NO"<<endl;
    else{
        if(b[v[0]]==b[v[1]]){
            cout<<"YES"<<endl;
            cout<<v[0]<<" "<<v[1]<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;

}
