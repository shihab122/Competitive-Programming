#include<bits/stdc++.h>

using namespace std;

int main(){
    bool sev[31625];
    memset(sev,true,sizeof(sev));
    vector<int>vc;
    vc.push_back(2);
    for(int i=4;i<=31624;i+=2) sev[i]=false;
    for(int i=3;i<=31624;i+=2){
        if(sev[i]==true){
            vc.push_back(i);
            for(int j=i+i;j<=31624;j+=i)
                sev[j]=false;

        }
    }

    while(t--){
        int l,u;
        scanf("%d %d",&l,&u);
        int ans=0,mx=0;
        for(int i=l;i<=u;i++){
            int x=i,d=1;
            for(int j=0;j<vc.size();j++){
                int cnt=1;
                if((x%vc[j])==0){
                    while(x%vc[j]==0){
                        cnt++;
                        x/=vc[j];
                    }
                    d*=cnt;
                }
                if(x<=1) break;
            }
            if(d>mx){
                mx=d;
                ans=i;
            }
        }
       printf("Between %d and %d, %d has a maximum of %d divisors.\n",l,u,ans,mx);
    }
*/

/*
    int t;
    scanf("%d",&t);
    for(int tes=0;tes<t;tes++){
        int l,u;
        scanf("%d %d",&l,&u);
        int mx=0,ans=0;
        for(int i=l;i<=u;i++){
            int cnt=0;
            for(int j=1;j<=sqrt(i);j++){
                if(i%j==0){
                    cnt++;
                    if(j<sqrt(i)) cnt++;
                }
            }
            if(cnt>mx){
                mx=cnt;
                ans=i;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",l,u,ans,mx);
    }
    */
   return 0;
}
