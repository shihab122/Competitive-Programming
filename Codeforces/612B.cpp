#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for(int i = 1; i <= n; i++){
        int x;
        scanf("%d", &x);
        arr[x] = i;
    }

    int y = arr[1];
    long long ans = 0;
    for(int i = 2; i <= n; i++){
        int z = arr[i];
        ans += abs(y - z);
        y = z;
    }
    printf("%lld\n", ans);

    return 0;
}
