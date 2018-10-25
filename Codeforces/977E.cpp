#include<bits/stdc++.h>
#define mx 300000
using namespace std;

int visit[mx],od[mx],p,fg;
vector<int>adj[mx];

void dfs(int a){
    if(od[a]!=2) fg = 0;
    visit[a]=1;
    for(int i =0;i<adj[a].size();i++){
        if(visit[adj[a][i]]==0) dfs(adj[a][i]);
    }
}

int main(){
    int n,m;// n = No of Vertices , m = No of Edges
    scanf("%d %d",&n,&m);

    p=n-1,fg=0;
    int u,v;
    long long cnt=0;
    for(int i=1;i<=m;i++){
        scanf("%d %d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);
        od[v]++;
        od[u]++;
    }

    for(int i=1;i<=n;i++){
        fg=1;
        if(visit[i]==0)dfs(i);
        else continue;
        if(fg==1) cnt++;
    }

    printf("%lld\n",cnt);

    return 0;
}
