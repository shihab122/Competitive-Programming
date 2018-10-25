#include<bits/stdc++.h>

using namespace std;

int arr[100000+10],tree[100010*3];

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
    tree[node]=min(tree[left],tree[right]);
}

int query(int node,int a,int b,int i,int j){
    if(j<a||i>b) return 10000000;
    if(a>=i&&b<=j){
        return tree[node];
    }
    //cout<<a<<" "<<b<<endl;
    int left=node*2;
    int right=node*2+1;
    int mid=(a+b)/2;
    int p=query(left,a,mid,i,j);
    int q=query(right,mid+1,b,i,j);
    return min(p,q);
}

int main(){
    int t;
    scanf("%d",&t);
    for(int tes=1;tes<=t;tes++){
        memset(arr,0,sizeof(arr));
        memset(tree,0,sizeof(tree));
        int n,q;
        scanf("%d%d",&n,&q);
       // cout<<n<<" "<<q<<endl;

        for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
        init(1,1,n);

        printf("Case %d:\n",tes);
        for(int i=1;i<=q;i++){
            int l,r;
            scanf("%d %d",&l,&r);
            printf("%d\n",query(1,1,n,l,r));
        }
    }

    return 0;
}
