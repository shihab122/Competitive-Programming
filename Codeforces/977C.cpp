#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n,k;
    scanf("%lld %lld",&n,&k);
    ll arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        scanf("%lld",&arr[i]);
    }
    sort(arr,arr+n+1);
    if(k==0&&arr[1]>1) printf("%lld\n",arr[1]-1);
    else if(k!=0&&k<n && arr[k]!=arr[k+1]) printf("%lld\n",arr[k]);
    else if(k==n) printf("%lld\n",arr[k]);
    else printf("-1\n");

    return 0;
}
