#include<bits/stdc++.h>

using namespace std;

int main(){
    int k, m;
    while(scanf("%d", &m)){
        if(m == 0) break;
        scanf("%d", &k);
        map<int, int> mp;

        for(int i = 0; i < m; i++){
            int a;
            scanf("%d", &a);
            mp[a]++;
        }

        int flag = 0;
        for(int i = 0; i < k; i++){
            int c, r, cnt = 0;
            scanf("%d %d", &r, &c);
            for(int j = 0; j < r; j++){
                int x;
                scanf("%d", &x);
                if(mp[x] == 1) cnt++;
            }
            if(cnt < c) flag = 1;
        }

        if(flag == 1) printf("no\n");
        else printf("yes\n");
        mp.clear();
    }

    return 0;
}
