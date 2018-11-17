#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ll cnt = 0;
    for(int i = 1; i < n - 1; i++){
        if(arr[i] == 0){
            if(arr[i - 1] == 1 && arr[i - 1] == arr[i + 1])
                cnt++, arr[i + 1] = 0;
        }
    }
    printf("%lld\n", cnt);

    return 0;
}
