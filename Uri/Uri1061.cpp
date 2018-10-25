#include<bits/stdc++.h>
using namespace std;

int main(){
    int startday=0,starthour=0,startmin=0,startsec=0,endday=0,endhour=0,endmin=0,endsec=0,W=0,X=0,Y=0,Z=0;
    char s1[4],a1[2],b1[2],s2[4],a2[2],b2[2];
    scanf("%s%d%d%s%d%s%d",s1,&startday,&starthour,a1,&startmin,b1,&startsec);
    scanf("%s%d%d%s%d%s%d",s2,&endday,&endhour,a2,&endmin,b2,&endsec);
    if(endsec<startsec){
        Z=Z+(endsec+60)-startsec;
        Y=Y-1;
    }
    else
        Z=Z+endsec-startsec;
    if(endmin<startmin){
        Y=Y+(endmin+60)-startmin;
        X=X-1;
    }
    else
        Y=Y+endmin-startmin;
    if(endhour<starthour){
        X=X+(endhour+24)-starthour;
        W=W-1;
    }
    else
        X=X+endhour-starthour;
    W=W+endday-startday;
    if(W==-1)
        W=0;
    else if(X==-1)
        X=0;
    else if(Y==-1)
        Y=0;
    else if(Z==-1)
        Z=0;
    cout<<W<<" dia(s)"<<endl;
    cout<<X<<" hora(s)"<<endl;
    cout<<Y<<" minuto(s)"<<endl;
    cout<<Z<<" segundo(s)"<<endl;

    return 0;
}
