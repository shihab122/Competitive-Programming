#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, mx1 = 0, mx2 = 0;
    scanf("%d", &n);
    vector<int> u(n + 1), v(n + 1);
    map<int,int>mp1, ri, le;
    for(int i = 1; i <= n; i++){
        scanf("%d", &u[i]);
    }
    for(int i = 1; i <= n; i++){
        scanf("%d", &v[i]);
        mp1[v[i]] = i;
    }
    for(int i = 1; i <= n; i++) {
        if(i >= mp1[u[i]]) {
            int pos = abs(mp1[u[i]] - i);
            ri[pos]++;
            mx1 = max(mx1, ri[pos]);
        }
        else {
            int pos = (i + n) - mp1[u[i]];
            ri[pos]++;
            mx1 = max(mx1, ri[pos]);
        }

        if(i <= mp1[u[i]]) {
            int pos = abs(mp1[u[i]] - i);
            le[pos]++;
            mx2 = max(mx2, le[pos]);
        }
        else {
            int pos = abs((i + n) - mp1[u[i]]);
            le[pos]++;
            mx2 = max(mx2, le[pos]);
        }
    }
    printf("%d", max(mx1, mx2));

    return 0;
}
