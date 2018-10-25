#include<bits/stdc++.h>

using namespace std;

int main(){
    //cout<<fixed;
    //cout<<setprecision(4);
    int h,m;
    scanf("%d%d",&h,&m);
    int hun,d,c,n;
    scanf("%d %d %d %d",&hun,&d,&c,&n);
    int x=hun/n;
    if((hun%n)!=0) x++;
    double mx=x*c;

    int mini=0,hour=0;
    if(h<20){
        mini=60-m;
        h+=1;
        hour=20-h;
        mini+=(hour*60);
    }
    double e=c-(c*0.2);
    mini*=d;
    hun+=mini;
    int ans=hun/n;
    if(hun%n!=0) ans+=1;
    double mx2=ans*e;
    double fans=min(mx,mx2);
    printf("%lf\n",fans);


    return 0;
}
