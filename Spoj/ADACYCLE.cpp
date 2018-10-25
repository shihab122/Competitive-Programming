#include<bits/stdc++.h>
#define mx 2001
using namespace std;
vector<int> graph[mx];

struct node{
    int u, w;
};

int bfs(int source){
    queue<node>qu;
    bool visited[mx];
    memset(visited, 0 ,sizeof(visited));
    visited[source] = true;
    node start;
    start.u = source;
    start.w = 1;
    qu.push(start);
    while(!qu.empty()){
        start = qu.front();
        int u = start.u, w = start.w;
        //if(u == source && w != 1) return w;
        qu.pop();
        for(int i = 0; i < graph[u].size(); i++){
            if(graph[u][i] == source) return w;
            else if(visited[graph[u][i]] == false){
                int v = graph[u][i];
                visited[v] = true;
                start.u = v;
                start.w = w + 1;
                qu.push(start);
                //cout<<start.u<<" "<<start.w<<endl;
            }
        }
    }
    return -1;

}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x;
            scanf("%d", &x);
            if(x == 1) graph[i].push_back(j);
        }
    }

    for(int i = 1; i <= n; i++){
        int y = bfs(i);
        if(y == -1) printf("NO WAY\n");
        else printf("%d\n", y);

    }


    return 0;
}
