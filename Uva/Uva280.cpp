#include<bits/stdc++.h>

using namespace std;
vector<int>vc[101];
bool visit[101];

void dfs(int x){
    for(int i = 0; i < vc[x].size(); i++){
        if(visit[vc[x][i]] == false){
            visit[vc[x][i]] = true;
            dfs(vc[x][i]);
        }
    }
}

int main(){
    int n;
    //freopen("in.txt", "w", stdout);
    while(scanf("%d", &n)){
        if(n == 0) break;
        int node;

        while(scanf("%d", &node)){
            if(node == 0) break;
            int y, cnt = 0;
            while(scanf("%d", &y)){
                if(y == 0) break;
                vc[node].push_back(y);
            }
        }

        int u , v;
        scanf("%d", &u);
        int sz;
        vector<int>ans;
        while(u--){
            scanf("%d", &v);
            memset(visit, false, sizeof(visit));
            dfs(v);
            for(int i = 1; i <= n; i++)
                if(visit[i] == false) ans.push_back(i);

            int sz = ans.size();
            printf("%d", sz);
            for(int i = 0; i < sz; i++){
                printf(" %d", ans[i]);
            }
            printf("\n");
            ans.clear();
        }

        for(int i = 1; i <= n; i++)
            vc[i].clear();
    }


    return 0;
}
