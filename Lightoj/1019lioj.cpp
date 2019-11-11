#include<bits/stdc++.h>
#define pii pair<int, int>
#define mx 105

using namespace std;

vector<pii> adj[mx];
int dist[mx];

struct node{
    int v, w;
};

bool operator<(node a, node b){
    return a.w > b.w;
}

void dijkstra(){
    dist[1] = 0;
    priority_queue<node> pq;
    node e;
    e.v = 1;
    e.w = 0;
    pq.push(e);

    while(!pq.empty()){
        int v = pq.top().v, w = pq.top().w;
        pq.pop();
        for(int i = 0; i < adj[v].size(); i++){
            int x = adj[v][i].first, y = adj[v][i].second;
            if(dist[x] > (y + w)){
                dist[x] = y + w;
                e.v = x;
                e.w = dist[x];
                pq.push(e);
            }
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int n, m;
        scanf("%d %d", &n, &m);
        for(int i = 0; i < mx; i++) adj[i].clear(), dist[i] = INT_MAX;
        for(int i = 0; i < m; i++){
            int u, v, w;
            scanf("%d %d %d", &u, &v, &w);
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        dijkstra();
        if(dist[n] == INT_MAX) printf("Case %d: Impossible\n", tes);
        else printf("Case %d: %d\n", tes, dist[n]);
    }

    return 0;
}
