#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t,d,k,t1,t2,m;
    cin>>n>>t>>k>>d;
    n=(n-1)/k+1;
    t1=n*t;
    if(d+t<t1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
