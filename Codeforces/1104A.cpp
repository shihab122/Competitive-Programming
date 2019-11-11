#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int p = n / 2, ans = 1;
    for(int i = 9; i >= 2; i--){
        if(n % i == 0){
            ans = i;
            break;
        }
    }

    printf("%d\n", n / ans);
    for(int i = 1; i <= n / ans; i++){
        printf("%d ", ans);
    }


    return 0;
}
