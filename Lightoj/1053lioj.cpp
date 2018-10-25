#include<bits/stdc++.h>

using namespace std;

int main(){
    //freopen("int.txt","w",stdout);
    int t;
    scanf("%d",&t);
    cout<<fixed;
    cout<<setprecision(3);
    for(int i=1;i<=t;i++){
        long long y,z,e,arr[3];
        double x;
        scanf("%lld%lld%lld",&arr[0],&arr[1],&arr[2]);
        sort(arr,arr+3);
        y=arr[0]*arr[0];
        z=arr[1]*arr[1];
        e=y+z;
        x=sqrt(e);
      //  cout<<x<<" "<<arr[2]<<endl;
        x=x-arr[2];
        if(x==0) printf("Case %d: yes\n",i);
        else printf("Case %d: no\n",i);
    }
    return 0;
}
/*
1
30960 38976 49776
*/
