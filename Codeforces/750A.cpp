#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,sum=0,p=0,time;
    cin>>n>>k;
    time=240-k;
    for(int i=1;i<=n;i++){
        sum+=5*i;
        if(time>=sum) p++;
        else break;
    }
    cout<<p<<endl;
    return 0;
}
