#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define Mp make_pair
using namespace std;

int main(){
    int n=14;
    vector<ll>arr(14);
    for(int i=0;i<14;i++){
        scanf("%lld",&arr[i]);
    }
    ll mx=0;
    for(int i=0;i<14;i++){
        if(arr[i]!=0){
            vector<ll>te(14);
            te=arr;
            ll sum=0;
            for(int j=1;j<14;j++){
                te[(i+j)%14]+= arr[i]/14;
            }
            te[i]=arr[i]/14;
            ll mod=arr[i]%14,k=i+1;
            while(mod){
                mod--;
                te[k%14]+=1;
                k++;
            }
            for(int j=0;j<n;j++) if(te[j]%2==0) sum+=te[j];
            mx=max(mx,sum);
        }
    }
    printf("%lld\n",mx);
    return 0;
}

