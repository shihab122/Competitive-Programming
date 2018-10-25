#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    ll arr[] = {1, 5, 10, 20, 100};
    ll a, cnt = 0;
    scanf("%lld", &a);
    for(int i = 4; i >= 0; i--){
        if(a >= arr[i]){
            cnt += a / arr[i];
            a %= arr[i];
        }
        if(a == 0) break;
    }

    printf("%lld\n", cnt);


    return 0;
}
