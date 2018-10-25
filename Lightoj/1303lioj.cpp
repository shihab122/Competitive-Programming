#include<bits/stdc++.h>

using namespace std;

int man[21][21];
int sit[21];
int n, m;

int check(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(man[i][j] == 0)
                return 1;
        }
    }
    for(int i = 1; i <= m; i++)
        if(sit[i] > 0) return 1;

    return 0;
}

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        memset(sit, 0, sizeof(sit));
        memset(man, 0, sizeof(man));

        scanf("%d %d", &n, &m);
        list<int>li;
        list<int>:: iterator it;
        int ans = 0;

        for(int i = 1; i <= n; i++) li.push_back(i);

        for(ans = 0; check() == 1; ans++){
            int now = ans % m + 1;
            if(sit[now] != 0){
                li.push_back(sit[now]);
                sit[now] = 0;
            }

            for(it = li.begin(); it != li.end(); it++){
                if(man[*it][now] == 0){
                    li.erase(it);
                    man[*it][now] = 1;
                    sit[now] = *it;
                    break;
                }
            }
        }
        printf("Case %d: %d\n", tes, ans * 5);

    }


    return 0;
}
