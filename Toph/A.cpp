#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a;
    cin>>a;
    long long ans=a/3;
    long long b=a%3;
    if(b>0) ans+=1;

    cout<<ans<<endl;

    return 0;
}
