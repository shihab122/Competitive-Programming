#include<bits/stdc++.h>

using namespace std;

struct node{
    int u, v, w;
};

char vc[1005][1005];
bool visit[1005][1005];
int xx[] = {0, 0, -1, 1};
int yy[] = {1, -1, 0, 0};

int bfs(int r, int c){

    deque<node> dq;
    node nd;
    nd.u = 0;
    nd.v = 0;
    nd.w = 0;
    dq.push_front(nd);

    while(!dq.empty()){
        nd = dq.front();
        dq.pop_front();
        int x = nd.u, y = nd.v, z = nd.w;
        if(visit[x][y]) continue;
        if(x == (r - 1) && y == (c - 1)) return z;
        visit[x][y] = true;
        for(int i = 0; i < 4; i++){
            int xi = x + xx[i];
            int yi = y + yy[i];
            int ab = abs(x - xi) + abs(y - yi);
            if(xi >= 0 && yi >= 0 && xi < r && yi < c && ab == 1 && !visit[xi][yi]){
                if(vc[x][y] == vc[xi][yi]){
                    nd.u = xi;
                    nd.v = yi;
                    nd.w = z;
                    dq.push_front(nd);
                }
                else{
                    nd.u = xi;
                    nd.v = yi;
                    nd.w = z + 1;
                    dq.push_back(nd);
                }
            }
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int r, c;
        scanf("%d %d", &r, &c);
        char ch;
        scanf("%c", &ch);
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                scanf("%c", &ch);
                vc[i][j] = ch;
                visit[i][j] = false;
            }
            scanf("%c", &ch);
        }
        int ans = bfs(r, c);
        printf("%d\n", ans);
    }

    return 0;
}
