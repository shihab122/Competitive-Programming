#include<bits/stdc++.h>

using namespace std;

int main(){
    int month;
  //  freopen("in.txt","w",stdout);
    while(scanf("%d",&month)){
        if(month<=0) break;
        double downpay,loanam,dp,owes,dep[101],perloan,carval;
        int mn,m,mont=0,t=0;
        for(int i=0;i<101;i++) dep[i]=-1.0;
        scanf("%lf%lf%d",&downpay,&loanam,&mn);
        perloan=loanam/month;
        //cout<<perloan<<endl;
        carval=downpay+loanam;
        for(int i=0;i<mn;i++){
            scanf("%d %lf",&m,&dp);
            dep[m]=dp;
        }
        for(int i=0;i<101;i++){
            if(dep[i]==-1.0) dep[i]=dep[i-1];
        }
        owes=loanam;
        carval=(loanam+downpay)*(1-dep[0]);
        while(1){
            if(carval>owes){
                printf(mont==1 ? "1 month\n" : "%d months\n",mont);
                break;
            }

        //cout<<carval<<endl;
            mont++,t++;
            carval=carval*(1.0-dep[t]);
            owes-=perloan;
           // cout<<carval<<" "<<owes<<endl;
        }
    }

    return 0;
}
