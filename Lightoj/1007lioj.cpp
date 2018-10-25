#include<bits/stdc++.h>
#define mx 5000002

using namespace std;
typedef unsigned long long ull;
ull arr[mx];

int main(){
    for(ull i = 0; i < mx; i++) arr[i] = i;

    for(int i = 2; i < mx; i++){
        if(arr[i] == i){
            for(int j = i; j < mx; j += i)
                arr[j] -= arr[j] / i;
        }
        arr[i] = arr[i - 1] + (arr[i] * arr[i]);
    }

    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int a, b;
        scanf("%d %d", &a, &b);
        ull ans = arr[b] - arr[a - 1];
        printf("Case %d: %llu\n", tes, ans);
    }

    return 0;
}
