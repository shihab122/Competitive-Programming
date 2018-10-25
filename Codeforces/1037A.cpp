#include<bits/stdc++.h>

using namespace std;


int main(){
    int n, ans = 0;
    scanf("%d", &n);
    while(n > 0){
        n /= 2;
        ans++;
    }

    printf("%d\n", ans);

    return 0;
}
