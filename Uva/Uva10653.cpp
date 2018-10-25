#include<bits/stdc++.h>

using namespace std;

bool grid[1010][1010];

int pr[] = {1, -1, 0, 0};
int pc[] = {0, 0, 1, -1};

struct Edge{
    int u, v, w;
};

int BFS(int sr, int sc, int dr, int dc, int r, int c){
    queue<Edge>Q;
    Edge e;
    e.u = sr, e.v = sc, e.w = 0;
    Q.push(e);
    grid[sr][sc] = true;

    while(!Q.empty()){
        e = Q.front();
        Q.pop();
        int u = e.u, v = e.v, w = e.w;

        if(u == dr && v == dc) return w;

        for(int i = 0; i < 4; i++){
            int tu = u + pr[i], tv = v + pc[i], tw = w + 1;
            if(tu >= 0 && tu < r && tv >= 0 && tv < c && grid[tu][tv] == false){
                e.u = tu, e.v = tv, e.w = tw;
                Q.push(e);
                grid[tu][tv] = true;
            }
        }
    }
}


int main(){
    int r, c;
    while(scanf("%d %d", &r, &c)){
        if(r == 0 && c == 0) break;
        memset(grid, false, sizeof(grid));
        int R;
        scanf("%d", &R);
        while(R--){
            int u, v, n;
            scanf("%d %d", &u, &n);
            for(int i = 0; i < n; i++){
                scanf("%d", &v);
                grid[u][v] = true;
            }
        }
        int sr, sc, dr, dc;
        scanf("%d %d", &sr, &sc);
        scanf("%d %d", &dr, &dc);

        int ans =  BFS(sr, sc, dr, dc, r, c);
        printf("%d\n", ans);
    }

    return 0;
}
