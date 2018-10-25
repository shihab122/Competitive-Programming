#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

struct lio{
    ll l,r;
}arr[100000+10];

int main(){
    int n;
    ll mn=1e10,mx=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld%lld",&arr[i].l,&arr[i].r);
        mn=min(mn,arr[i].l);
        mx=max(mx,arr[i].r);
    }
    for(int i=0;i<n;i++){
        if(arr[i].l<=mn&&arr[i].r>=mx){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
