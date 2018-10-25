#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,x=0,y=0,ans=0,c=0;
    scanf("%lld",&n);
  //  long long arr[n+1];
  //  memset(arr,0,sizeof(arr));
    for(int i=1;i<=n;i++){
        char a;
        cin>>a;
        if(a=='U'){
            y++;
            if(x!=y) c=1;
           // else c=0;
        }
        else{
            x++;
        }
        if(x==y&&c==1) ans++,c=0;
    }
    cout<<ans<<endl;
    return 0;
}
