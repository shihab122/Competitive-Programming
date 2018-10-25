#include<bits/stdc++.h>

using namespace std;

int arr[1000000+100],start[1000000+100],cnt[1000000+100],tree[1000100*3],freq[1000000+100];

void init(int node,int a,int b){
    if(a==b){
        tree[node]=freq[a];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(a+b)/2;
    init(left,a,mid);
    init(right,mid+1,b);
    tree[node]=max(tree[left],tree[right]);
}

int query(int node,int a,int b,int i,int j){
    if(j<a||i>b) return -1;
    if(a>=i&&b<=j){
        return tree[node];
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(a+b)/2;
    int p=query(left,a,mid,i,j);
    int q=query(right,mid+1,b,i,j);
    int x=max(p,q);
    return x;
}


int main(){
    int n,q;
    //freopen("in.txt","w",stdout);
    while(scanf("%d",&n)){
        if(n==0) break;
        scanf("%d",&q);
        memset(arr,0,sizeof(arr));
        memset(start,0,sizeof(start));
        memset(freq,0,sizeof(freq));
        memset(cnt,0,sizeof(cnt));
        memset(tree,0,sizeof(tree));

        for(int i=1;i<=n;i++){
                scanf("%d",&arr[i]);
                if(i==1||arr[i]!=arr[i-1]) cnt[arr[i]]=1,start[arr[i]]=i;
                else cnt[arr[i]]+=1;
        }
        for(int i=1;i<=n;i++) freq[i]=cnt[arr[i]];
        init(1,1,n);

        for(int i=1;i<=q;i++) {
            int l,r;
            scanf("%d %d",&l,&r);

            if(arr[l]==arr[r]){
                printf("%d\n",r-l+1);
            }
            else{
                int ans=0,leftans=0,rightans=0,r1=0,r2=0,qw=0;
                leftans=cnt[arr[l]]-(l-start[arr[l]]);
                rightans=(r-start[arr[r]])+1;
                ans=max(leftans,rightans);
                r1=l+leftans;
                r2=r-rightans;
                if(r1<=r2){
                    qw=query(1,1,n,r1,r2);
                    ans=max(ans,qw);
                }
                printf("%d\n",ans);
            }
        }
    }

    return 0;
}
