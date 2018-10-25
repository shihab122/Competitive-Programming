#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    long long sum = n;
    for(int i = 2; i <= n; i++){
        for(int j = i * i; j <= n; j += i){
            sum++;
        }
    }

    printf("%lld\n", sum);

    return 0;
}
