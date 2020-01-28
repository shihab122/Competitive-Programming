#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; //number of nodes
    scanf("%d",&n);
    int dist[n+1],length[n+1][n+1];
    vector< vector<int>> vc;
    for(int i=0;i<n;i++){
        int u,v,l;
        scanf("%d%d%d",&u,&v,&l);
        length[u][v]=l;
        vc[u].push_back(v);
    }
    for(int i=0;i<)


    return 0;
}
