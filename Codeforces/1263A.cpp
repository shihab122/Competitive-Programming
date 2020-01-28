#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long arr[3];
        scanf("%lld %lld %lld", &arr[0], &arr[1], &arr[2]);
        sort(arr, arr + 3);
        long long ans = 0;
        if(arr[0] + arr[1] <= arr[2]) ans = arr[0] + arr[1];
        else{
            ans = abs(arr[0] - arr[1]);
            arr[2] -= ans;
            if(arr[2] < arr[0]){
                ans += abs(arr[2] - arr[0]);
                arr[0] = arr[2];
            }
            if(arr[2] >= 1 && arr[0] >= 1){
                ans += arr[0];
                arr[2] -= arr[0];
                long long u = (arr[0] / 2) + (arr[0] % 2);
                u = arr[0] - u;
                ans += max(arr[2], u);

            }
        }
        printf("%lld\n", ans);
    }

    return 0;
}
