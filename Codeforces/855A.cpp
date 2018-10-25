#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string,int>a;
    int n;
    cin>>n;
    while(n--){
        string b;
        cin>>b;
        if(a[b]!=1){
            a[b]=1;
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
