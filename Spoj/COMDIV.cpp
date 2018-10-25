#include<bits/stdc++.h>
#define mx 1000000

using namespace std;

int arr[1000005];

int gcd(int a, int b){
    if(a % b == 0) return b;
    else return gcd(b, a % b);
}

int main(){
    memset(arr, 0, sizeof(arr));
    for(int i = 2; i <= mx; i++){
        for(int j = i; j <= mx; j += i)
            arr[j]++;
    }

    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        int x = gcd(a, b);
        printf("%d\n", arr[x] + 1);
    }


    return 0;
}
