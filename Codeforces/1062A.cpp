#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int mx;
int main(){
    int n, cnt = 0;
    scanf("%d", &n);
    int arr[n + 2];
    arr[0] = 0;
    arr[n + 1] = 1001;
    for(int i = 1; i <= n; i++) scanf("%d", &arr[i]);

    for(int i = 0; i <= n; ++i){
        int wsk = i;
        while(wsk <= n && arr[wsk + 1] == arr[wsk] + 1) ++wsk;
        mx = max(mx, wsk - i - 1);
    }

    printf("%d\n", mx);

    return 0;
}
