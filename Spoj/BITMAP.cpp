#include<bits/stdc++.h>


using namespace std;
int x[] = {0, 0, 1, -1};
int y[] = {1, -1, 0, 0};

struct node{
    int r, c;
    int val;
};


int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        queue<node>q;
        bool visit[200][200];
        int ans[200][200];

        scanf("%d %d", &n, &m);
        node nd;
        for(int i = 0; i < n; i++){
            string st;
            cin>>st;
            for(int j = 0; j < st.size(); j++){
                ans[i][j] = 0;
                visit[i][j] = false;
                if(st[j] == '1'){
                    nd.r = i;
                    nd.c = j;
                    nd.val = 0;
                    q.push(nd);
                    visit[i][j] = true;
                    ans[i][j] = 0;
                }
            }
        }

        while(!q.empty()){

            nd = q.front();
            q.pop();
            int r = nd.r;
            int c = nd.c;
            int an = nd.val;

            for(int i = 0; i < 4; i++){

                int ur = r + x[i], vc = c + y[i];

                if(ur >= 0 && ur < n && vc >= 0 && vc < m && !visit[ur][vc]){
                    visit[ur][vc] = true;
                    nd.r = ur;
                    nd.c = vc;
                    nd.val = an + 1;
                    ans[ur][vc] = an + 1;
                    q.push(nd);
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                printf("%d", ans[i][j]);
                if(j+1 != m) printf(" ");
                else printf("\n");
            }
        }
    }

    return 0;
}
