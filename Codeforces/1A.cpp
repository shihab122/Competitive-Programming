#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll r,c,a,sum=0;
    scanf("%lld%lld%lld",&r,&c,&a);
    if((r*c)<=(a*a)) cout<<1<<endl;
    else{
        ll rt=r/a,ct;
        if(r%a!=0) rt+=1;
        c-=a;
        sum+=rt;
        if(c>0){
            ct=c/a;
       // cout<<c<<endl;
            sum+=(ct*rt);
            if(c%a!=0) sum+=rt;
        }
        cout<<sum<<endl;
    }

    return 0;
}
