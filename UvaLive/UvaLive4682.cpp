#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    freopen("in.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        ll sum = 0,p = 0;
        for(int i=0;i<n;i++){
            ll x;
            scanf("%lld",&x);
            if(i==0) sum =x;
            else sum = max(x,sum^x);
            //cout<<p<<" "<<sum<<endl;
            p = max(p,sum);
        }
        printf("%lld\n",p);
    }


    return 0;
}
