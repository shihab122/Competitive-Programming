#include<bits/stdc++.h>

using namespace std;
int prime[4000];

int main(){
    memset(prime,0,sizeof(prime));
    int a,ans=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int cnt=0;
    /*
        int cnt=0,j=2,k=i;
        while(k>1){
            int pd=0;
            while(k%j==0) pd=1,k/=j;
            cnt+=pd;
            j++;
        }
        if(cnt==2) ans++;*/
        for(int j=2;j<i;j++){
            if(prime[j]==1&&i%j==0) cnt++;
        }
        if(cnt==0) prime[i]=1;
        if(cnt==2) ans++;
    }
    cout<<ans<<endl;

    return 0;
}
