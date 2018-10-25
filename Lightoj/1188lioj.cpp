#include<bits/stdc++.h>

using namespace std;


struct Node{
    int l,r,id;
}v[50000+100];
int arr[100000+100],block,ans=0,res[50000+100],cnt[100000+100];

bool cmp(Node a,Node b){
    if(a.l/block==b.l/block) return a.r<b.r;
    else return a.l/block<b.l/block;
}

void add(int index){
    cnt[arr[index]]++;
    if(cnt[arr[index]]==1) ans++;

}

void remov(int index){
    cnt[arr[index]]--;
    if(cnt[arr[index]]==0) ans--;
}

int main(){
    //freopen("in1.txt","w",stdout);
    int T;
    scanf("%d",&T);


    for(int tes=1;tes<=T;tes++){
        ans=0;
        memset(cnt,0,sizeof(cnt));
        memset(arr,0,sizeof(arr));
        memset(v,0,sizeof(v));
        memset(res,0,sizeof(res));
        int n;
        scanf("%d",&n);
        int Q;
        scanf("%d",&Q);
        for(int i=1;i<=n;i++) scanf("%d",&arr[i]);

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
                if(curL!=0) remov(curL);
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

        printf("Case %d:\n",tes);
        for(int i=1;i<=Q;i++) printf("%d\n",res[i]);

    }

    return 0;
}

