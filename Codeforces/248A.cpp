#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int a = 0, b = 0, x = 0, y = 0;
    int u, v;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &u, &v);
        if(u == 0) a++;
        else b++;
        if(v == 0) x++;
        else y++;
    }
    int ans = min(a, b) + min(x, y);
    printf("%d\n", ans);

    return 0;
}
