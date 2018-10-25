#include<bits/stdc++.h>
#define mx 1000000
using namespace std;

typedef long long ll;

vector<ll>vc;

int gcd(int a, int b){
    if(a % b == 0) return b;
    else return gcd(b, a % b);
}

int main(){
    ll n;
    vc.push_back(1);
    vc.push_back(2);

    for(int i = 2; i <= mx; i++){
        int result = i, x = i;
        vc.push_back(0);
        vc[i] += vc[i - 1];
        for(int j = 2; j * j <= x; j++){
            if(x % j == 0){
                while(x % j == 0) x /= j;
                result -= result / j;
            }
        }
        if(x > 1) result -= result / x;
        vc[i] += result;
    }


    while(scanf("%lld", &n) &&n){
        if(n == 1) printf("0/1\n");
        else if(n == 2) printf("1/1\n");
        else{
            int index = (lower_bound(vc.begin(), vc.end(), n)) - vc.begin();
            while(vc[index] < n) index++;
            int id2 = n - vc[index - 1], ans;
            for(int i = 1; i < index; i++){
                if(gcd(index, i) == 1) id2--, ans = i;
                if(id2 == 0) break;
            }
            printf("%d/%d\n", ans, index);
        }
    }


    return 0;
}
