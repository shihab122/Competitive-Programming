#include <bits/stdc++.h>
#define mx 20005
using namespace std;
struct node
{
    int u,w;
};
vector <int> graph[mx];
bool visit[mx];
int color[mx];
int re,bl,mxi;
void bfs(int source)
{   re=0,bl=0;
    queue <node> Q;
    node obj;
    obj.u=source;
    obj.w=1;
    Q.push(obj);visit[source]=true;
    while(Q.size()!=0)
    {
        obj = Q.front();Q.pop();
        int u = obj.u , w = obj.w;
  //  cout<<u<<" "<<w<<endl;
        if(w==1) re++;
        else bl++;
        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            if(visit[v]==false)
            {
                visit[v]=true;
                obj.u=v;
                if(w==1) obj.w=2;
                else obj.w=1;
                Q.push(obj);
            }
        }
    }
    mxi+=max(re,bl);
    return ;
}
int main(){
  //  freopen("in.txt","w",stdout);
    int T;
    scanf("%d",&T);
    for(int cs=1;cs<=T;cs++){
        re=0,bl=0,mxi=0;
        memset(visit,0,sizeof(bool)*mx);
        memset(color,0,sizeof(color));
        memset(graph,0,sizeof(graph));
        int M;
        scanf("%d",&M);
        vector<int>arr;
        while(M--)
        {
            int u , v ; // There is a road between junctions u and v
            scanf("%d%d",&u,&v);
            graph[u].push_back(v);
            graph[v].push_back(u);
            arr.push_back(u);
            arr.push_back(v);
        }
        for(int i=0;i<arr.size();i++){
            if(visit[arr[i]]==false) bfs(arr[i]);
        }
        printf("Case %d: %d\n",cs,mxi);
    }
    return 0;
}
