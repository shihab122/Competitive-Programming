#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c,t=0,pi=2*acos(0.0);
    cin>>a>>b>>c;
    double d,e,f,g;
    d=a-b;
    while(c--){
        double x,y,z;
        cin>>x>>y>>z;
        f=sqrt(x*x+y*y);
        if(f+z<=a&&f-z>=d) t++;
    }
    cout<<t<<endl;
    return 0;
}
