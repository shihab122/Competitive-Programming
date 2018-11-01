#include<bits/stdc++.h>

using namespace std;
const int mx = 1e8 + 1;
int mark[mx/32 + 1];

bool check(int n, int pos){
    return (bool) (n & (1 << pos));
}

int Set(int n, int pos){
    n = n | (1 << pos);
    return n;
}

void solve(int n){
    int rt = sqrt(n);
    printf("2\n");
    int cnt = 1;
    for(int i = 3; i <= rt; i += 2){
        if(check(mark[i / 32], i & 31) == 0){
            if((++cnt) % 100 == 1) printf("%d\n", i);
            for(int j = i * i; j < mx; j += i * 2)
                mark[j / 32] = Set(mark[j / 32], j & 31);
        }
    }

    rt++;
    if(rt % 2 == 0) rt++;
    for(int i = rt; i < mx; i += 2)
        if(check(mark[i / 32], i & 31) == 0 && (++cnt) % 100 == 1)
            printf("%d\n", i);
}

int main(){
    solve(mx);
    return 0;
}
