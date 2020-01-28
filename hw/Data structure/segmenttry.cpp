#include<bits/stdc++.h>
#define mx 100000
using namespace std;
int arr[mx],tree[mx*3];

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
    tree[node]=tree[left]+tree[right];
}

int query(int node,int a,int b,int i,int j){
    if(j<a||i>b) return 0;
    if(a>=i&&b<=j) return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(a+b)/2;
    int p=query(left,a,mid,i,j);
    int q=query(right,mid+1,b,i,j);
    return p+q;
}

void update(int node,int a,int b,int i,int newvalue){
    if(i<a||i>b) return;
    if(a>=i&&b<=i){
        tree[node]=newvalue;
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(a+b)/2;
    update(left,a,mid,i,newvalue);
    update(right,mid+1,b,i,newvalue);
    tree[node]=tree[left]+tree[right];
}



int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    init(1,1,n);

    return 0;
}
