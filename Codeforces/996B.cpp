#include<bits/stdc++.h>
#define mx 1e10
using namespace std;
typedef long long ll;

int main(){
    ll n;
    scanf("%lld", &n);
    ll arr[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }

    ll ans = mx, ans2;
    for(int i = 0; i < n; i++){
        ll mn;
        if(i >= arr[i]) mn = i;
        else{
            mn = (arr[i] / n) * n;
            ll c = arr[i] % n;
            if(i >= c) mn += i;
            else mn += n;
        }
        if(mn < ans){
        //cout<< i << " "<<mn<<endl;
            ans = min(mn, ans);
            ans2 = i + 1;
        }
    }

    printf("%lld\n", ans2);

    return 0;
}
