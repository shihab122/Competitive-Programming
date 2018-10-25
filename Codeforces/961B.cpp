#include<bits/stdc++.h>
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define SQ(a) (a)*(a)

using namespace std;
typedef long long ll;

int main(){
    ll n,k,j=0,mx=0,sum=0;
    scanf("%lld %lld",&n,&k);
    ll arr[n+1],valu[n+1],pos[n+1];
    valu[j]=0;
    for(int i=1;i<=n;i++){
        scanf("%lld",&arr[i]);
    }
    for(int i=1;i<=n;i++){
        scanf("%lld",&pos[i]);
        if(pos[i]==1) sum=sum+arr[i],valu[i]=valu[i-1]+0;
        else valu[i]=valu[i-1]+arr[i];
    }
    for(int i=k;i<=n;i++){
        mx=max(mx,valu[i]-valu[j]);
        j++;
    }
    mx=mx+sum;
    cout<<mx<<endl;
    return 0;
}


