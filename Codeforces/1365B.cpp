#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, x;
        scanf("%d", &n);
        vector<int> vc1(n), vc2(n);
        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            vc1[i] = x;
            vc2[i] = x;
        }
        int u = 0, v = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            if(x) u++;
            else v++;
        }
        v = min(u, v);
        if(v > 0) puts("Yes");
        else {
            v = 0;
            sort(vc1.begin(), vc1.end());
            for(int i = 0; i < n; i++) {
                if(vc1[i] != vc2[i]) {
                    v = 1;
                }
            }
            if(!v) puts("Yes");
            else puts("No");
        }

    }

    return 0;
}
