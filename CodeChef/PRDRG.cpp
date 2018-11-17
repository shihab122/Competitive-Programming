#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int t;
    scanf("%d", &t);
    vector<ll>vc;
    ll a;
    while(t--){
        scanf("%lld", &a);
        a = 2LL * a;
        vc.push_back(1);
        vc.push_back(a);
    }
    for(int i = 0; i < vc.size(); i++)
        printf("%lld ", vc[i]);

    return 0;
}
