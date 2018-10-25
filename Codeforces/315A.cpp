#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, cnt = 0;
    scanf("%d", &n);
    int a, b;
    vector<pair<int,int> > vc(n + 1);
    pair<int,int>p;
    for(int i = 1; i <= n; i++){
        scanf("%d %d", &p.first, &p.second);
        vc[i] = p;
    }
    for(int i = 1; i <= n; i++){
        a = vc[i].first;
        int j;
        for(j = 1; j <= n; j++){
            if(i != j && a == vc[j].second) break;
        }
        if(j > n) cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}
