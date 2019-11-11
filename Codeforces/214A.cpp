#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int cnt = 0;
    for(int i = 0; i < 1003; i++){
        int x = i * i;
        int y = n - x;
        if(y < 0) continue;
        x = i + (y * y);
        if(x == m) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
