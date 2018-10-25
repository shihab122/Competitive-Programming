#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(int i=0;i<n;i++){
        int c,d,e;
        c=a[i]-'0';
        d=b[i]-'0';
        e=(min(c,d))+10;
        e=abs(e-max(c,d));
        e=min(e,abs(c-d));
        sum+=e;
    }
    cout<<sum<<endl;
    return 0;
}
