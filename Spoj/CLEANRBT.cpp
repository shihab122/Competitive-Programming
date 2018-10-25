#include<bits/stdc++.h>

using namespace std;

vector<string>vc;
struct node{
    int r, c, val;
};
int x[] = { 1, -1, 0, 0};
int y[] = { 0, 0, 1, -1};

int main(){
    int n, m;
    while(scanf("%d %d", &n, &m)){
        if(n == 0 && m == 0) break;
        node nd;
        queue<node>q;
        int cnt = 0, ans = 0, cnt2 = 0;
        bool visit[30][30], visit2[30][30];
        memset(visit, false, sizeof(visit));
        memset(visit2, false, sizeof(visit2));
        for(int i = 0; i < m; i++){
            string st;
            cin>>st;
            for(int j = 0; j < st.size(); j++){
                if(st[j] == 'o'){
                    nd.r = i;
                    nd.c = j;
                    nd.val = 0;
                    q.push(nd);
                    visit[i][j] = true;
                    visit2[i][j] = true;
                }
                else if(st[j] == '*') cnt++;
            }
            vc.push_back(st);
        }
        while(!q.empty()){
            nd = q.front();
            q.pop();
            int u = nd.r;
            int v = nd.c;
            int val = nd.val;
            for(int i = 0; i < 4; i++){
                int ur = u + x[i];
                int vr = v + y[i];
                if(ur >= 0 && ur < m && vr >= 0 && vr < n && visit[ur][vr] == false && visit2[ur][vr] == false && vc[ur][vr] != 'x'){
                    if(vc[ur][vr] == '*'){
                        while(!q.empty()) q.pop();
                        memset(visit, false, sizeof(visit));
                        visit2[ur][vr] = true;
                        cnt2++;
                        ans += (val + 1);
                        cout<<val<<endl;
                    }
                    if(cnt != cnt2){
                        nd.r = ur;
                        nd.c = vr;
                        if(vc[ur][vr] == '*') nd.val = 0;
                        else nd.val = val + 1;
                        q.push(nd);
                        visit[ur][vr] = true;
                    }
                }
            }

        }
        if(cnt == cnt2) printf("%d\n", ans);
        else printf("-1\n");
        vc.clear();

    }


    return 0;
}

