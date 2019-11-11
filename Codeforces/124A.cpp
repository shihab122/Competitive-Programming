#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if((n - i) <= b && (i - 1) >= a) cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}
