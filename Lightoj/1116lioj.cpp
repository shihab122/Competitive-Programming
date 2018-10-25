#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    //freopen("in.txt", "w", stdout);
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        long long a;
        scanf("%lld", &a);
        if(a % 2 != 0) printf("Case %d: Impossible\n", tes);
        else{
            long long sq = sqrt(a);
            long long a1 = 2, a2;
            while(a % a1 != 0 || ((a / a1) % 2) == 0) a1 += 2;
            a2 = a / a1;
            printf("Case %d: %lld %lld\n", tes, a2, a1);
        }

    }

    return 0;
}
