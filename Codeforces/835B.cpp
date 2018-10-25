#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a,c=0,x;
    string b;
    cin>>a>>b;
    vector<int>g;
    for(long long i=0;i<b.size();i++){
        c+=b[i]-'0';
        g.push_back(b[i]-'0');
    }
    sort(g.begin(),g.end());
    x=b.size();
    for(long long i=0;c>0;i++){
        c-=g[i];
        x--;
    }
    cout<<x<<endl;
    return 0;
}
