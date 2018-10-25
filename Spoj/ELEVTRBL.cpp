#include<bits/stdc++.h>

using namespace std;

struct node{
    int u, w;

};

int main(){
    int f, s, g, u, d;
    scanf("%d %d %d %d %d", &f, &s, &g, &u, &d);

    queue<node>q;
    bool visited[f + 1];
    memset(visited, false, sizeof(visited));

    node nd;
    nd.u = s;
    nd.w = 0;
    q.push(nd);
    visited[s] = true;

    while(!q.empty()){
        nd = q.front();
        int v = nd.u, w = nd.w;
        q.pop();
        if(v == g){
            printf("%d\n", w);
            return 0;
        }
        int a = v + u;
        int b = v - d;
        if(a > 0 && a <= f && visited[a] == false){
            visited[a] = true;
            nd.u = a;
            nd.w = w + 1;
            q.push(nd);
        }
        if(b > 0 && b <= f && visited[b] == false){
            nd.u = b;
            nd.w = w + 1;
            visited[b] = true;
            q.push(nd);
        }
    }
    printf("use the stairs\n");

    return 0;
}
