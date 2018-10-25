#include<bits/stdc++.h>
#define F first
#define S second
#define ii pair<int,int>
#define iii pair<long long,long long>

using namespace std;
typedef long long ll;


int main(){
    ll n,sum=0;
    scanf("%lld",&n);
    ll arr[n+1];
    for(int i=1;i<=n;i++){
        scanf("%lld",&arr[i]);
        sum+=arr[i];
    }
    ll half=(sum/2)+(sum%2);
    sum=0;
    for(int i=1;i<=n;i++){
        sum+=arr[i];
        if(sum>=half){
            printf("%d\n",i);
            return 0;
        }
    }

    return 0;
}
