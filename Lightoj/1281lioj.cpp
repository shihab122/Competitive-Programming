#include<bits/stdc++.h>
#define mx 10005
#define inf 10000000
using namespace std;

struct edge {
    int v, w, pd;
};
vector<edge> graph[mx];
int dist[11][mx];

void clr(){
    for(int i = 0; i < 11; i++){
        for(int j = 0; j < mx; j++){
            dist[i][j] = inf;
            graph[j].clear();
        }
    }
}

bool operator<(edge a, edge b){
    return a.w > b.w;
}

int dijkstra(int dest, int mxD) {
    priority_queue<edge> Q;
    edge ed;
    ed.v = 0, ed.w = 0, ed.pd = 0;
    Q.push(ed);
    dist[0][0] = 0;
    while(!Q.empty()){
        int u = Q.top().v;
        int w = Q.top().w;
        int d = Q.top().pd;
        Q.pop();
        if(u == dest) return w;
        for(int i = 0; i < graph[u].size(); i++){
            int x = graph[u][i].v, y = w + graph[u][i].w, z = d + graph[u][i].pd;
            if(z <= mxD && dist[z][x] > y){
                ed.v = x, ed.w = y, ed.pd = z;
                dist[z][x] = y;
                Q.push(ed);
            }
        }
    }
    return -1;
}

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int n, m, k, d, u;
        edge ed;
        clr();
        scanf("%d %d %d %d", &n, &m, &k, &d);
        ed.pd = 0;
        for(int i = 0; i < m; i++){
            scanf("%d %d %d", &u, &ed.v, &ed.w);
            graph[u].push_back(ed);
        }
        ed.pd = 1;
        for(int i = 0; i < k; i++){
            scanf("%d %d %d", &u, &ed.v, &ed.w);
            graph[u].push_back(ed);
        }
        int ans = dijkstra(n - 1, d);
        if(ans == -1) printf("Case %d: Impossible\n", tes);
        else printf("Case %d: %d\n", tes, ans);
    }

    return 0;
}
