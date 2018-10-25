#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    map<char,int>c;
    map<char,int> :: iterator it;
    for(int i=0;i<n;i++){
        char t;
        cin>>t;
        c[t]++;
    }
    for(it=c.begin();it!=c.end();it++){
        if(it->second>k){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
