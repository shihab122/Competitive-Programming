#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string a,b,c="",d="";
    cin>>a>>b;
    c=c+a[0],d=d+b[0];
    for(int i=1;i<a.size();i++){
        if(a[i]<b[0]) c+=a[i];
        else break;
    }
    cout<<c<<d<<endl;
    return 0;
}
