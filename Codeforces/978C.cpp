#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    ll arr[n+1],arr1[m+1];
    arr[0] = 0;
    for(int i=0;i<n;i++){
        ll x;
        scanf("%lld",&x);
        arr[i] += x;
        arr[i+1] = arr[i];
    }
    for(int i=0;i<m;i++){
        scanf("%lld",&arr1[i]);
    }
    int u=0,v=0;
    while(1){
        if(v==m) break;
        //cout<<arr[u]<<" "<<arr[v]<<endl;
        if(arr[u]==arr1[v]){
            if(u==0) printf("%d %lld\n",u+1,arr1[v]);
            else printf("%d %lld\n",u+1,abs(arr[u-1]-arr1[v]));
            v++;
        }
        else if(arr[u]>arr1[v]){
            if(u==0) printf("%d %lld\n",u+1,arr1[v]);
            else printf("%d %lld\n",u+1,abs(arr[u-1]-arr1[v]));
            v++;
        }
        else u++;
    }
    return 0;
}
