#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        if(a.size()<=10) cout<<a<<endl;
        else{
            int sz=a.size()-2;
            cout<<a[0]<<sz<<a[a.size()-1]<<endl;
        }
    }
    return 0;
}
