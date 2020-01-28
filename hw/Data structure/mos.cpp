#include<bits/stdc++.h>

using namespace std;


struct Node{
    int l,r,id;
}v[200000+100];
int arr[30000+100],block,ans=0,res[200000+100],cnt[1000000+100];

bool cmp(Node a,Node b){
    if(a.l/block==b.l/block) return a.r<b.r;
    else return a.l/block<b.l/block;
}

void add(int index){
    ans ^=arr[index];

}

void remov(int index){
    ans -=arr[index];
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);

    int Q;
    scanf("%d",&Q);
    for(int i=1;i<=Q;i++){
        scanf("%d%d",&v[i].l,&v[i].r);
        v[i].id=i;
    }
    block=sqrt(Q);
    sort(&v[1],&v[Q+1],cmp);

    int curL=0,curR=0;
    for(int i=1;i<=Q;i++){
        int L=v[i].l,R=v[i].r;
        while(curL<L){
            remov(curL);
            curL++;
        }
        while(curL>L){
            curL--;
            add(curL);
        }
        while(curR<R){
            curR++;
            add(curR);
        }
        while(curR>R){
            remov(curR);
            curR--;
        }
        res[v[i].id]=ans;
    }

    for(int i=1;i<=Q;i++) printf("%d\n",res[i]);
    return 0;
}
