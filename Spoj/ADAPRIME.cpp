#include<bits/stdc++.h>
#define sc scanf
#define pb push_back
#define pr printf

using namespace std;

int mark[5000001];

int main(){
    int n;
    sc("%d", &n);
    vector<int> prime;
    prime.pb(2);
    memset(mark, 0, sizeof(mark));
    int limit = sqrt(500000) + 2;
    for(int i = 4; i <= 500000; i += 2) mark[i] = 1;
    for(int i = 3; i <= 500000; i += 2){
        if(mark[i] == 0){
            prime.pb(i);
            if(i <= limit){
                for(int j = i * i; j <= 500000; j += i * 2) mark[j] = 1;
            }
        }
    }
    for(int i = 0; i < prime.size(); i++) pr("%d\n", prime[i]);
    return 0;
}
