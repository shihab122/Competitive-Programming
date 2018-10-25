#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        double a,b,c,d,h,base,area1,area2,s,x;
        cin>>a>>b>>c>>d;
        x=min(a,c);
        base=abs(a-c);
        s=(base+b+d)/2;
        area1=sqrt(s*(s-base)*(s-b)*(s-d));
        h=(2*area1)/base;
        area2=h*x;
        printf("Case %d: %lf\n",i,area1+area2);
    }
    return 0;
}
