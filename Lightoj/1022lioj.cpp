#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    double pi=2*acos(0.0);
    cin>>T;
    for(int i=1;i<=T;i++){
        double r,m,n;
        cin>>r;
        m=r*2;
        n=(m*m)-(pi*r*r);
        printf("Case %d: %.2lf\n",i,n);
    }
    return 0;
}
