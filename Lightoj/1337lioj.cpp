#include<bits/stdc++.h>

using namespace std;

const int SIZE = 503;

int visit[SIZE][SIZE];
int matrix[SIZE][SIZE];
vector<string> vc;
string s;
int cnt;

void clear(){
    vc.clear();
    for(int i = 0; i < 503; i++){
        s += '#';
        for(int j = 0; j < 503; j++){
            visit[i][j] = 0;
            matrix[i][j] = 0;
        }
    }
}

void dfs(int x, int y, int p){
    if(visit[x][y] > 0) return;
    else if(vc[x][y] == '#') return;
    else if(vc[x][y] == 'C') cnt++;
    visit[x][y] = p;
    dfs(x + 1, y, p);
    dfs(x, y + 1, p);
    dfs(x, y - 1, p);
    dfs(x - 1, y, p);

}

int main(){
    //freopen("in.txt", "w", stdout);
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int m, n, q;
        s = "";
        scanf("%d %d %d", &m, &n, &q);
        clear();
        vc.push_back(s);
        for(int i = 0; i < m; i++){
            string t;
            cin>>t;
            t = '#' + t + '#';
            vc.push_back(t);
        }
        vc.push_back(s);
        printf("Case %d:\n", tes);
        int p = 1;
        while(q--){
            int x, y;
            cnt = 0;
            scanf("%d %d", &x, &y);
            if(visit[x][y] == 0){
                dfs(x, y, p);
                printf("%d\n", cnt);
                for(int i = 1; i <= m; i++){
                    for(int j = 1; j <= n; j++){
                        if(visit[i][j] == p) matrix[i][j] = cnt;
                    }
                }
            }
            else printf("%d\n", matrix[x][y]);
            p++;
        }
    }
    return 0;
}
