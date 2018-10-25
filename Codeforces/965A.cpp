#include<bits/stdc++.h>

using namespace std;

int main(){
    int k,n,s,p,ans=0;
    cin>>k>>n>>s>>p;

    int i=1;
    while(1){
        if(i*s>=n) break;
        i++;
    }
    int y=i*k;
    int x=y/p;
    if(y%p!=0) x++;
    cout<<x<<endl;


    return 0;
}
