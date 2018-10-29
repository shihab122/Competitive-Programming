#include<bits/stdc++.h>
#define mx 1010

using namespace std;
vector<int>primes;

int BS(int point){
    int lo = 0, hi = primes.size(), mid;
    while(lo <= hi){
        mid = (lo + hi) / 2;
        if(primes[mid] == point) return mid;
        else if(primes[mid] < point) lo = mid + 1;
        else hi = mid - 1;
    }
    return lo;
}

int main(){
    primes.push_back(1);
    primes.push_back(2);
    bool isPrime[mx];
    memset(isPrime, false, sizeof(isPrime));
    for(int i = 4; i < mx; i += 2) isPrime[i] = true;
    for(int i = 3; i < mx; i += 2){
        if(isPrime[i] == false){
            primes.push_back(i);
            for(int j = i * i; j < mx; j += i * 2)
                isPrime[j] = true;
        }
    }

    int n, c;
    //freopen("in.txt", "w", stdout);
    while(scanf("%d %d", &n, &c) != EOF){
        int location = BS(n);
        printf("%d %d:", n, c);
        if(primes[location] < n) location++;
        if(primes[location] > n || location >= primes.size()) location--;
        deque<int>ans;
        int midPoint = ((location + 1) / 2);
        if((location + 1) % 2 == 0) c = 2 * c;
        else c = (2 * c) - 1;

        int u = midPoint, v = midPoint, sz = 0;
        while(1){
            if(u < 0 && v > location) break;
            if(sz == c) break;
            if(u >= 0) ans.push_front(primes[u]), sz++;
            if(ans.size() == c) break;
            if(u != v && primes[v] <= n) ans.push_back(primes[v]), sz++;
            u--;
            v++;
        }

        while(!ans.empty()){
            printf(" %d", ans.front());
            ans.pop_front();
        }
        printf("\n\n");
        //ans.clear();
    }


    return 0;
}
