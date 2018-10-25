#include<bits/stdc++.h>

using namespace std;

long long bigmod(long b,long long p,long long m){
    if(p==0) return 1;
    else if(p%2==0) return ((bigmod(b,p/2,m)%m)*(bigmod(b,p/2,m)%m))%m;
    else return ((b%m)*(bigmod(b,p-1,m)%m))%m;
}

int main(){
    long long b,p,m;
    while(cin>>b>>p>>m){
        cout<<bigmod(b,p,m)<<endl;
    }

    return 0;
}
