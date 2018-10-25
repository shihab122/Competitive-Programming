#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    double a,b,c,d,e,f;
    for(int i=1;i<=T;i++){
        cin>>a>>b>>c>>d;
        e=sqrt(1+(1/d));
        f=a/e;
        printf("Case %d: %lf\n",i,f);
    }
    return 0;
}
