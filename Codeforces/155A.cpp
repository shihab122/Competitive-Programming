#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int mx, mn, ans = 0, a;
    scanf("%d", &mx);
    mn = mx;
    for(int i = 1; i < n; i++){
        scanf("%d", &a);
        if(a > mx) ans++;
        else if(a < mn) ans++;
        mx = max(mx, a);
        mn = min(mn, a);
    }

    printf("%d\n", ans);

    return 0;
}
