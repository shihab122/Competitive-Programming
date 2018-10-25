#include<bits/stdc++.h>

using namespace std;

int main(){
//    freopen("in,txt","w",stdout);
    int n,m,c,cnt=0;
    while(scanf("%d%d%d",&n,&m,&c)){
        if(n==0&&m==0&&c==0) break;
        int arr[n+1],amount=0,flag=0,mx=-1;
        memset(arr,0,sizeof(arr));
        bool ar[n+1];
        memset(ar,false,sizeof(ar));
        for(int i=1;i<=n;i++){
            int b;
            cin>>b;
            arr[i]=b;
        }
        for(int i=0;i<m;i++){
            int a;
            scanf("%d",&a);
            if(ar[a]==false){
                ar[a]=true;
                amount+=arr[a];
            }
            else if(ar[a]==true){
                ar[a]=false;
                amount-=arr[a];
            }
            if(c<amount) flag=1;
            else if(flag==0){
                mx=max(mx,amount);
            }
        }
        if(flag==0){
            printf("Sequence %d\n",++cnt);
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n",mx);
        }
        else{
            printf("Sequence %d\n",++cnt);
            printf("Fuse was blown.\n");
        }
        cout<<endl;
    }

    return 0;
}
