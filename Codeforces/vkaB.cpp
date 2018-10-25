#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,x,y;
    while(cin>>a>>b){
    int arr1[a];
    set<int>g;
    set<int>::iterator it;
    memset(arr1,0,sizeof(arr1));
    while(b--){
        cin>>x>>y;
        g.insert(x);
        g.insert(y);
        arr1[x]++;
        arr1[y]++;
    }
    int sz=g.size()-1;
    for(it=g.begin();it!=g.end();it++){
        if(arr1[*it]!=sz){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    }
    return 0;
}
