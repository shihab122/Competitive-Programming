#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int vc[m+1];
    for(int i=0;i<m;i++){
        scanf("%d",&vc[i]);
    }
    int fedor;
    scanf("%d",&fedor);
    int ans=0;
    for(int i=0;i<m;i++){
        int lol=fedor^vc[i],cnt=0;
        while(lol>0){
            if(lol%2!=0) cnt++;
            lol/=2;
        }
        if(cnt<=k) ans++;
    }
    printf("%d\n",ans);

    return 0;
}
