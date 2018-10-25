#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll a, sum = 0;
        scanf("%lld", &a);
        a = abs(a);
        int i;
        for(i = 1;; i++){
            sum += i;
            if(sum == a) break;
            else if(sum > a){
                ll l = sum - a;
                if(l % 2 == 0) break;

            }
        }
        printf("%d\n", i);
        if(t) printf("\n");
    }

    return 0;
}
