#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, a, x = 0, y = 0, mx = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        if(a) y++;
        if(!a) x++, mx = max(x, mx);
        else if(x > 0) x--;
    }
    if(!mx) mx = -1;
    printf("%d\n", y + mx);
    return 0;
}
