#include<bits/stdc++.h>

using namespace std;

int main(){
 //   freopen("in.txt","w",stdout);
    cout<<fixed;
    cout<<setprecision(3);
    double h,m,ans,dif;
    while(scanf("%lf:%lf",&h,&m)){
        if(h==0&&m==0) break;
        h=(h*30)+(m/2);
        m=m*6;
        dif=abs(h-m);
        if(dif>180) dif=360-dif;
        cout<<dif<<endl;
    }
    return 0;
}
