#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int n, m;
    while(scanf("%d %d", &n, &m)){
        long long sum = n + m;
        if(n == 0 && m == 0) break;
        else printf("%lld\n", sum);
    }

    return 0;
}
