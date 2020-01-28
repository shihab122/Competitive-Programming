#include<bits/stdc++.h>
#define mx 30005
using namespace std;


int arr[mx],tree[mx*3];

void build_shi(int node,int left,int right){
    if(left==right){
        tree[node]=1;
        return;
    }
    int mid =(left+right)/2;
    int l=node*2;
    int r=node*2+1;
    build_shi(l,left,mid);
    build_shi(r,mid+1,right);


}

int query(int node,int left,int right,int l,int r){
    if(left>=l&&right<=r) return tree[node];
    if(right<l||left>r) return INT_MAX;
    int L=node*2;
    int R=node*2+1;
    int mid=(left+right)/2;
    int p=query(L,left,mid,l,r);
    int q=query(R,mid+1,right,l,r);
    return min(p,q);
}



int main(){
        int a;
        scanf("%d",&a);
        for(int i=1;i<=a;i++){
            scanf("%d",&arr[i]);
        }
        build_shi(1,1,a);
        int b;
        scanf("%d",&b);
        for(int i=1;i<=b;i++){
            int m,n;
            scanf("%d%d",&m,&n);
            printf("%d\n",query(1,1,a,m,n));
        }
    return 0;
}
