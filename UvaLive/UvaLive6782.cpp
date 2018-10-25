#include<bits/stdc++.h>

using namespace std;

struct dpi{
    int lef,ri,bh;
    double gray;
}brr[1000+10];

int main(){
    cout<<fixed;
    cout<<setprecision(3);
    int n;
    //double t=0.0001;
    scanf("%d",&n);
    int l,r,s,lis=1,LIS[n+1];
    memset(LIS,0,sizeof(LIS));
    for(int i=1;i<=n;i++){
        scanf("%d%d%d",&brr[i].lef,&brr[i].ri,&brr[i].bh);
        scanf("%lf",&brr[i].gray);
    }
    for(int i=1;i<=n;i++){
        if(LIS[i]<=1){
            vector<double>vc;
            map<int,int>mp;
            LIS[i]=1;
            mp[brr[i].bh]=1,mp[brr[i].ri]=1,mp[brr[i].lef]=1;
            vc.push_back(brr[i].gray);
            for(int j=i+1;j<=n;j++){
                    vector<double>:: iterator it=lower_bound(vc.begin(),vc.end(),brr[j].gray);
                    if(it==vc.end()&&(mp[brr[j].bh]==1||mp[brr[j].ri]==1||mp[brr[j].lef]==1)){
                        vc.push_back(brr[j].gray);
                        int x=vc.size();
                        //cout<<x<<endl;
                        LIS[j]=max(LIS[j],x);
                        lis=max(lis,x);
                        mp[brr[j].bh]=1,mp[brr[j].ri]=1,mp[brr[j].lef]=1;
                    }
                   // cout<<lis<<endl;
            }
            mp.clear();
            vc.clear();
        }
    }
    printf("%d\n",lis);
    return 0;
}
