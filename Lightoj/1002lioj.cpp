#include<bits/stdc++.h>
#define INF 100000000
using namespace std;

vector<pair<int,int> > vc[505];
int weight[505];

struct node{
    int v, w;
};

bool operator<(node a, node b){
    return a.w > b.w;
}

int dijk(int d, int r){
    bool visit[r + 1];
    for(int i = 0; i < r; i++){
        visit[i] = false;
        weight[i] =INF;
    }
    priority_queue<node>Q;
    node nd;
    nd.v = d;
    nd.w = 0;
    Q.push(nd);
    while(!Q.empty()){
        nd = Q.top();
        Q.pop();
        int x = nd.v, z = nd.w;
        if(visit[x]) continue;
        visit[x] = true;
        weight[x] = z;
        int sz = vc[x].size();
        for(int i = 0; i < sz; i++){
            pair<int,int> pa;
            pa = vc[x][i];
            int xi = pa.first;
            int zi = pa.second;
            if(!visit[xi]){
                nd.v = xi;
                nd.w = max(z, zi);
                Q.push(nd);
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
        for(int i = 0; i < m; i++){
            int u, v, w;
            scanf("%d %d %d", &u, &v, &w);
            pair<int,int>p;
            p.first = v;
            p.second = w;
            vc[u].push_back(p);
            p.first = u;
            p.second = w;
            vc[v].push_back(p);
        }
        int d;
        scanf("%d", &d);
        printf("Case %d:\n", tes);
        dijk(d, n);
        for(int i = 0; i < n; i++){
            if(i == d) printf("0\n");
            else{
                int ans = weight[i];
                if(ans != INF) printf("%d\n", ans);
                else printf("Impossible\n");
            }
        }
        for(int i = 0; i < n; i++) vc[i].clear();
    }

    return 0;
}
