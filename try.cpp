#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int>E[n + 1];
    int indegree[n + 1];
    for(int i = 1; i <= n; i++)
        indegree[i] = 0;

    queue<int>q, ans;
    for(int i = 0; i < m; i++){
        int u, v;
        scanf("%d %d", &u, &v);
        E[u].push_back(v);
        indegree[v]++;
    }

    for(int i = 1; i <= n; i++)
        if(indegree[i] == 0) q.push(i);

    while(!q.empty()){
        int x = q.front();
        ans.push(x);
        q.pop();
        for(int i = 0; i < E[x].size(); i++){
            indegree[E[x][i]]--;
            if(indegree[E[x][i]] == 0) q.push(E[x][i]);
        }
    }

    while(!ans.empty()){
        printf("%d ", ans.front());
        ans.pop();
    }


    return 0;
}
