#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n;
    scanf("%d", &n);
    ll sum = 0;
    ll arr[n+1];

    for(int i = 1; i <= n; i++){
        scanf("%lld", &arr[i]);
    }

    sort(arr+1, arr+n+1);
    for(int i = 1; i < n; i++){
        sum += ((i + 1) * arr[i]);
    }
    sum += (n * arr[n]);
    printf("%lld\n", sum);

    return 0;
}

/*int main(){
    int n;
    scanf("%d", &n);
    ll sum = 0, q;
    int arr[n];
    ll se[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    sort(arr, arr+n);

    for(int i = 0; i < n; i++){
        if(i == 0) se[i] = arr[i];
        else se[i] = se[i - 1] + arr[i];
    }
    q = se[n - 1];
    sum = q;
    for(int i = 0; i < n - 1; i++){
        sum += arr[i] + (q - se[i]);
    }
    printf("%lld\n", sum);

    return 0;
}
*/
