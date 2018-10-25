#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int t;
    //freopen("in.txt","w",stdout);
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        ll a;
        scanf("%lld",&a);
        double x=sqrt(a);
        double y=x-((int)x);
        ll r,c,U,ve=(int)x;
        if(y==0&&ve%2==0) c=x,r=1;
        else if(y==0&&ve%2!=0) c=1,r=x;
        else {
            ll curU=((int)x)+1;
            if(curU%2!=0) curU++;
            U=curU;
            curU--;
            ll val=(U*U)-(curU*2);
            if(val==a) c=1,r=curU+1;
            else if(val<a){
                val=a-val;
                //cout<<U<<endl;
                if(val>=U) c=U,r=U-(val-curU);
                else c=val+1,r=U;
                //cout<<c<<" "<<r<<endl;
            }
            else{
                val-=a;
                r=curU;
                if(val>=r) c=curU,r=r-(val-r);
                else c=val;
            }
        }
        printf("Case %d: %lld %lld\n",i,c,r);
    }
    return 0;
}
