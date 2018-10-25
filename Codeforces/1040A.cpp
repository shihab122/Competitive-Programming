#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int arr[n + 1];
    for(int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);

    int l = 1, r = n, ans = 0;
    while(l < r){
        if(arr[l] == arr[r]){
            if(arr[l] == 2) ans += min(a, b) + min(a, b);
        }
        else{
            if(arr[l] == 2){
                if(arr[r] == 0) ans += a;
                else ans += b;
            }
            else if(arr[r] == 2){
                if(arr[l] == 0) ans += a;
                else ans += b;
            }
            else{
                printf("-1\n");
                return 0;
            }
        }
        l++, r--;
    }
    if(n % 2 != 0){
        n /= 2;
        n++;
        if(arr[n] == 2) ans += min(a, b);
    }
    printf("%d\n", ans);


    return 0;
}
