#include<bits/stdc++.h>

using namespace std;

int main(){
  //  freopen("in.txt","w",stdout);
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n,m;
        scanf("%d %d",&n,&m);
        int arr[n];

        for(int j=0;j<n;j++) scanf("%d",&arr[j]);

        int R=0;
        for(int j=0;j<m;j++){
            char ans;
            int x,y;
            cin>>ans;
           // cout<<ans<<endl;
            if(ans=='p' ||ans=='P' ){
                scanf("%d %d",&x,&y);
                swap(arr[x],arr[y]);
            }
            else if(ans=='S'||ans=='s'){
                scanf("%d",&x);
                for(int k=0;k<n;k++) arr[k]+=x;
            }
            else if(ans=='M'||ans=='m'){
                scanf("%d",&x);
                for(int k=0;k<n;k++) arr[k]*=x;
            }
            else if(ans=='D'||ans=='d'){
                scanf("%d",&x);
                for(int k=0;k<n;k++) arr[k]/=x;
            }
            else{
                reverse(arr,arr+n);
            }
        }
        printf("Case %d:\n",i);
        for(int k=0;k<n-1;k++) printf("%d ",arr[k]);
        printf("%d",arr[n-1]);
        cout<<endl;
    }

    return 0;
}
