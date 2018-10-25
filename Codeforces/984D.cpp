#include<bits/stdc++.h>
#define mx 5005
using namespace std;
typedef long long ll;
ll arr[mx],tree[mx*3];

void init(int node,int a,int b){
    if(a==b){
        tree[node]=arr[a];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(a+b)/2;
    init(left,a,mid);
    init(right,mid+1,b);
    tree[node]=tree[left]^tree[right];
    //cout<<tree[node]<<endl;
}

ll query(int node,int a,int b,int i,int j){
    if(j<a||i>b) return 0;
    if(a>=i&&b<=j) return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(a+b)/2;
    ll p=query(left,a,mid,i,j);
    ll q=query(right,mid+1,b,i,j);
    return p^q;
}




int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%lld",&arr[i]);
    init(1,1,n);
    int q;
    scanf("%d",&q);
    for(int i =0;i<q;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        ll ans = query(1,1,n,x,y);
        printf("%lld\n",ans);
    }

    return 0;
}
