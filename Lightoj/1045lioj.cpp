#include<bits/stdc++.h>
#define mx 1000005

using namespace std;
double logg[mx];

int main(){
    for(int i = 1; i < mx; i++)
        logg[i] = logg[i - 1] + log(i);

    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int n, b;
        scanf("%d %d", &n, &b);
        long long ans = logg[n] / log(b) + 1;
        printf("Case %d: %lld\n", tes, ans);
    }

    return 0;
}
