#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, mn = 0, mx = 0;
    scanf("%d", &n);
    int a, b;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        mn -= a;
        mn += b;
        mx = max(mx, mn);
    }
    printf("%d\n", mx);

    return 0;
}
