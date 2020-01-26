#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    k = arr[k - 1];
    sort(arr, arr + n);
    int ans = n;
    for(int i = 0; i < n; i++){
        if(arr[i] >= k && arr[i] != 0) break;
        ans--;
    }
    printf("%d\n", ans);
    return 0;
}
