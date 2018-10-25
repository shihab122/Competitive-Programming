#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    ll sum = 0;
    ll arr[3];
    scanf("%lld %lld %lld", &arr[0], &arr[1], &arr[2]);
    sort(arr, arr+3);
    ll m = arr[0] + arr[1] + arr[2];
    m = m / 3;
    sum += min(m, arr[0] + arr[1]);
    printf("%lld\n", sum);

    return 0;
}
