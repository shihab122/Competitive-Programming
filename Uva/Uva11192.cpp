#include<bits/stdc++.h>


using namespace std;

int main(){
    int a;
    while(cin>>a){
        if(a==0) break;
        string b,ans="";
        cin>>b;
        int c=b.size()/a;
        int cn=c-1;
        for(int i=0;i<b.size();i+=c){
            string d=b.substr(i,c);
            reverse(d.begin(),d.end());
            ans+=d;
        }
        cout<<ans<<endl;
    }
    return 0;
}
