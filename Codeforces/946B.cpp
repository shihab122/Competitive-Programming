#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a,b;
    while(scanf("%lld%lld",&a,&b)){
    while(1){
        long long x=(long long)(2*b);
        long long y=(long long)(2*a);
        if(a==0||b==0) break;
        else if(a<(2*b)&&b<(2*a)) break;
        else if(a>=x){
                a%=x;
        }
        else if(b>=y){
            b%=y;
        }
    }
    printf("%lld %lld\n",a,b);
    }
    return 0;
}
