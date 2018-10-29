#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int n, k, p;
        scanf("%d %d %d", &n, &k, &p);
        p += k;
        int ans = p % n;
        if(p % n == 0) ans = n;
        printf("Case %d: %d\n", i, ans);
    }


    return 0;
}
