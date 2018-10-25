#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int a,b;
        long long ans=0;
        scanf("%d%d",&a,&b);
        if(a>b){
            int c=a-b;
            ans+=(a+c)*4;
            ans+=19;
        }
        else{
            ans+=b*4;
            ans+=19;
        }
        printf("Case %d: %lld\n",i,ans);
    }

    return 0;
}
