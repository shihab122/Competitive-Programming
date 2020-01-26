#include<bits/stdc++.h>
#define mx 10005
using namespace std;

bool operator<(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

int inf = 1000050;

vector<int> dijkstra(vector<vector<pair<int, int>> > &g, int s, int p){
    vector<int> dist(g.size() + 2, inf);
    priority_queue<pair<int, int>> Q;
    Q.push({s, 0});
    dist[s] = 0;
    while(!Q.empty()){
        int u = Q.top().first;
        int w = Q.top().second;
        Q.pop();
        if(dist[u] < w) continue;
        for(int i = 0; i < g[u].size(); i++){
            int v = g[u][i].first;
            int x = g[u][i].second;
            if(x + w < dist[v]){
                dist[v] = x + w;
                Q.push({v, x + w});
            }
        }
    }
    return dist;
}


int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int n, m, s, t, p, u, v, w;
        vector<vector<pair<int, int>> > graph1(mx), graph2(mx);
        for(int i = 0; i < mx; i++) graph1[i].clear(), graph2[i].clear();
        scanf("%d %d %d %d %d", &n, &m, &s, &t, &p);
        for(int i = 0; i < m; i++){
            scanf("%d %d %d", &u, &v, &w);
            graph1[u].push_back({v, w});
            graph2[v].push_back({u, w});
        }
        vector<int> dist1 = dijkstra(graph1, s, p);
        vector<int> dist2 = dijkstra(graph2, t, p);
        if((dist1[t] == INT_MAX && dist2[s] == INT_MAX)) printf("Case %d: -1\n", tes);
        else {
            int best = -1;
            for(int i = 0; i <= n; i++){
                for(int j = 0; j < graph1[i].size(); j++){
                    u = i, v = graph1[i][j].first, w = graph1[i][j].second;
                    if((dist1[u] + dist2[v] + w) <= p) best = max(best, w);
                }
            }
            printf("Case %d: %d\n", tes, best);
        }
    }


    return 0;
}
