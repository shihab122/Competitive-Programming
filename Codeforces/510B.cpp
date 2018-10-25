#include<bits/stdc++.h>

using namespace std;
int n, m;
bool visited[51][51];
int val[51][51];
int dr[] = {0, 0, 1, -1};
int dc[] = {1, -1, 0, 0};

vector<string>vc;

bool dfs(int pi, int pj, int i, int j, int cnt){
    visited[i][j] = true;

    for(int k = 0; k < 4; k++){
        int r = i + dr[k], c = j + dc[k];
        if(r == pi && c == pj) continue;
        if(r >= 0 && r < n && c >= 0 && c < m && vc[i][j] == vc[r][c]){
            if(visited[r][c]) return true;
            if(dfs(i, j, r, c, cnt + 1)) return true;
        }

    }
    return false;

}



int main(){
    scanf("%d %d", &n, &m);
    memset(visited, false, sizeof(visited));
    memset(val, 0, sizeof(val));

    for(int i = 0; i < n; i++){
        string a;
        cin>>a;
        vc.push_back(a);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < vc[i].size(); j++){
            if(visited[i][j] == false){
                bool ans = dfs(-1, -1, i, j, 1);
                if(ans){
                    printf("Yes\n");
                    return 0;
                }
            }
        }
    }

    printf("No\n");

    return 0;
}
