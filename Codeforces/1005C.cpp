#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    int n;
    scanf("%d", &n);
    ll arr[n], a[33];
    map<ll, int>mp;
    for(int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
        mp[arr[i]]++;
    }
    int ans = 0;
    for(int i = 0; i <= 32; i++) a[i] = pow(2, i);
    for(int i = 0; i < n; i++){
        mp[arr[i]]--;
        int flag = 0;
        for(int j = 0; j <= 32; j++){
            if(flag == 1) break;
            int x = a[j] - arr[i];
            //cout<<x<<" "<<mp[x]<<endl;
            if(mp[x] >= 1) flag = 1;
        }
        if(flag == 0) ans++;
        mp[arr[i]]++;
    }
    printf("%d\n", ans);

    return 0;
}
