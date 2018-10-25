#include<bits/stdc++.h>

using namespace std;

struct node{
    int u, v, w;
};


bool operator<(node a, node b){
    return a.w > b.w;
}

int xx[]={1, -1, 0, 0};
int yy[]={0, 0, 1, -1};
bool visit[1000][1000];
int cost[1000][1000];
int ans[1000][1000];

int dijk(int r, int c){
    priority_queue<node>Q;
    node nd;
    nd.u = 0;
    nd.v = 0;
    nd.w = cost[0][0];
    ans[0][0] = cost[0][0];
    Q.push(nd);
    while(!Q.empty()){
        nd = Q.top();
        Q.pop();
        int x = nd.u, y = nd.v, z  = nd.w;
        if(x == (r-1) && y == (c-1)) return z;
        if(visit[x][y]) continue;
        visit[x][y] = true;
        ans[x][y] = z;
        for(int i = 0; i < 4; i++){
            int xi= x + xx[i];
            int yi = y + yy[i];
            int wi = z + cost[xi][yi];
            if(xi >= 0 && yi >= 0 && xi < r && yi < c && visit[xi][yi]==false && ans[xi][yi] > wi){
                nd.u = xi;
                nd.v = yi;
                nd.w = wi;
                Q.push(nd);
            }
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    //freopen("in.txt","w", stdout);
    for(int tes = 1; tes <= t; tes++){
        int n, m;
        scanf("%d", &n);
        scanf("%d", &m);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int x;
                scanf("%d", &x);
                cost[i][j] = x;
                visit[i][j] = false;
                ans[i][j] = 10000000;
            }
        }
        int sum = dijk(n, m);
        printf("%d\n", sum);
    }
    return 0;
}
