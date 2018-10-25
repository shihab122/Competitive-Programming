#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        double d,u,v;
        scanf("%lf %lf %lf",&d,&v,&u);
        printf("Case %d: ",i);
        if(v==0||u==0||v>=u) printf("can't determine\n");
        else{
            double t1=d/u;
            double t2=d/(sqrt(u*u-v*v));
            double t=abs(t2-t1);
            printf("%.3lf\n",t);
        }
    }


    return 0;
}
