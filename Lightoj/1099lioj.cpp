#include<bits/stdc++.h>
#define mx 5010
#define inf INT_MAX
#define pii pair<int, int>

using namespace std;

struct Edge{
    int v, w;
};


bool operator<(Edge a, Edge b){
    return a.w > b.w;
}

vector<pii>adj[mx];
int dist[mx][2];

void dijk(int n){
    priority_queue<Edge>pq;
    Edge e;
    e.v = 1;
    e.w = 0;
    pq.push(e);

    for(int i = 1; i <= n; i++) dist[i][0] = inf, dist[i][1] = inf;
    dist[1][0] = 0;
    //dist[1][1] = 0;

    while(!pq.empty()){
        int u = pq.top().v;
        int cost = pq.top().w;
        pq.pop();
        cout<<u<<" "<<dist[1][1]<<" "<<dist[1][0]<<endl;
        for(int i = 0; i < adj[u].size(); i++){
            int v = adj[u][i].first, w = adj[u][i].second;
            if(dist[v][0] > (cost + w)){
                dist[v][1] = dist[v][0];
                dist[v][0] = cost + w;
                e.v = v;
                e.w = dist[v][0];
                pq.push(e);
            }
            else if(dist[v][0] < (cost + w) && dist[v][1] > (cost + w)){
                dist[v][1] = cost + w;
                e.v = v;
                e.w = dist[v][1];
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
        for(int i = 1; i <= n; i++) adj[i].clear();
        for(int i = 0; i < m; i++){
            int u, v, w;
            scanf("%d %d %d", &u, &v, &w);
            adj[u].push_back(pii(v, w));
            adj[v].push_back(pii(u, w));

        }

        dijk(n);
        printf("Case %d: %d\n", tes, dist[n][1]);
    }


    return 0;
}
