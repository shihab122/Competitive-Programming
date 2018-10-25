#include<bits/stdc++.h>
#define mx 50005


using namespace std;
int parent[mx];

int find(int x){
    if(parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}

int main(){
    int t = 1;
    while(true){
        int n, m;
        scanf("%d %d", &n, &m);
        if(n == 0 && m == 0) break;
        map<int, int> mp;
        for(int i = 1; i <= n; i++) parent[i] = i;
        for(int i = 0; i < m; i++){
            int a, b;
            scanf("%d %d", &a, &b);
            if(find(parent[a]) != find(parent[b])){
                parent[find(parent[a])] = find(parent[b]);
                n--;
            }
        }
        if(n < 0) n = 0;
        printf("Case %d: %d\n", t++, n);
    }


    return 0;
}
