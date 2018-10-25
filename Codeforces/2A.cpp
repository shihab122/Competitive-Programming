#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,mx;
    string e;
    cin>>a;
    map<string,int>b;
    vector<string>c;
    vector<int>d;
    for(int i=0;i<a;i++){
        string x;
        int t;
        cin>>x>>t;
        c.push_back(x);
        d.push_back(t);
    }
    mx=d[0];
    e=c[0];

    for(int i=0;i<d.size();i++){
        b[c[i]]+=d[i];
        if(b[c[i]]>mx){
            e=c[i];
            mx=b[c[i]];
        }
    }
    cout<<e<<endl;
    return 0;
}
