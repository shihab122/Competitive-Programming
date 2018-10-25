#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m=0;
    cin>>n;
    string y;
    map<string,int>a;
    while(n--){
        string x;
        cin>>x;
        a[x]++;
    }
    map<string,int>::iterator it;
    for(it=a.begin();it!=a.end();it++){
        if(it->second>m){
            m=it->second;
            y=it->first;
        }
    }
    cout<<y<<endl;
    return 0;
}
