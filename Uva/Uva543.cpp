#include<bits/stdc++.h>
#define mx 1000000

using namespace std;
typedef long long ll;

bool isPrime[mx];

vector<int>primes;

int main(){
    memset(isPrime, true, sizeof(isPrime));
    primes.push_back(2);
    for(int i = 4; i < mx; i += 2) isPrime[i] = false;

    for(ll i = 3; i < mx; i += 2){
        if(isPrime[i] == true){
            primes.push_back(i);
            for(ll j = i * i; j < mx; j += i * 2)
                isPrime[j] = false;
        }
    }

    int n, sq = sqrt(primes.size()) + 1;
    while((scanf("%d", &n)) && n){
        int f = 0;
        for(int i = 0; i <= sq; i++){
            if(isPrime[n - primes[i]] == true){
                printf("%d = %d + %d\n", n, primes[i], n - primes[i]);
                f = 1;
                break;
            }
        }
        if(f == 0) printf("Goldbach's conjecture is wrong\n");
    }

    return 0;
}
