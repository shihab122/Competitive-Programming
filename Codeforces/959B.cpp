#include<bits/stdc++.h>
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define SQ(a) (a)*(a)

using namespace std;
typedef long long ll;
int parent[100000+10];
int cost[100000+10];

int findparent(int p){
    if(parent[p]==p) return p;
    else return parent[p]=findparent(parent[p]);
}

void dsu(int x,int y){
    int a=findparent(x);
    int b=findparent(y);
    if(cost[a]>cost[b]) parent[a]=b;
    else parent[b]=a;
}

int main(){
    int n,m,k;
    map<string,int>mp;
    scanf("%d %d %d",&n,&k,&m);
    for(int i=1;i<=n;i++){
        string a;
        cin>>a;
        mp[a]=i;
        parent[i]=i;
    }
    for(int i=1;i<=n;i++) scanf("%d",&cost[i]);

    for(int i=1;i<=k;i++){
        int x,prev=0;
        scanf("%d",&x);
        for(int j=1;j<=x;j++){
            int y;
            scanf("%d",&y);
            if(j==1) prev=y;
            else{
                dsu(prev,y);
                prev=y;
            }

        }

    }
    long long sum=0;
    for(int i=1;i<=m;i++){
        string str;
        cin>>str;
        int cs=findparent(mp[str]);
        sum+=cost[cs];
    }
    printf("%lld\n",sum);


    return 0;
}
