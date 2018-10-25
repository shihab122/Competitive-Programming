#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    int n;
    scanf("%d", &n);
    vector<ll>vc;
    for(int i = 0; i < n; i++){
        ll x;
        scanf("%lld", &x);
        vc.push_back(x);
    }
    for(int i = 0; i < n; i++){
        if(vc[i] % 2 != 0) vc[i] = vc[i] + 1;
    }
    for(int i = 0; i < n; i++){
        if(vc[i] % 2 == 0) vc[i] = vc[i] - 1;
        printf("%lld ", vc[i]);
    }
    printf("\n");



    return 0;
}
