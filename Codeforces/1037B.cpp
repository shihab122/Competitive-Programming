#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, s;
    scanf("%d %d", &n, &s);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    sort(arr, arr+n);

    long long ans = 0;
    int x = n / 2;
    if(arr[x] == s) {
        printf("0\n");
        return 0;
    }

    ans += abs(s - arr[x]);
    if(arr[x] < s){
        for(int i = x + 1; i < n; i++)
            ans += max(0, s - arr[i]);
    }

    else{
        for(int i = 0; i < x; i++)
            if(arr[i] > s) ans += abs(s - arr[i]);
    }
    printf("%lld\n", ans);

    return 0;
}
