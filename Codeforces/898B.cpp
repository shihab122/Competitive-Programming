#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(){
    ll x,a,b;
    scanf("%lld%lld%lld",&x,&a,&b);
    if(x%a==0){
        ll u=x/a;
        printf("YES\n");
        printf("%lld 0\n",u);
    }
    else if(x%b==0){
        ll u=x/b;
        printf("YES\n");
        printf("0 %lld\n",u);
    }
    else{
        ll u,v,cn1=0,cn2=0;
        u=x,v=x;
        while(1){
            if(u<=0&&v<=0) break;
            else{
                u-=a,v-=b;
                cn1++;
                if(u%b==0&&u>=0){
                    ll uv=u/b;
                    printf("YES\n");
                    printf("%lld %lld\n",cn1,uv);
                    return 0;
                }
                else if(v%a==0&&v>=0){
                    ll ua=v/a;
                    printf("YES\n");
                    printf("%lld %lld\n",ua,cn1);
                    return 0;
                }
            }
        }
        printf("NO\n");
    }
    return 0;
}
