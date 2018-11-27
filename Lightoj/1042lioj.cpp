#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int n;
        scanf("%d", &n);
        int x = n & (-n);
        int y = x + n;
        n = (n & ~y) / x >> 1 | y;
        printf("Case %d: %d\n", tes, n);
    }

    return 0;
}
