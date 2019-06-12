#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    for(int j = 1; j <= n; j++) printf("  ");
    printf("0\n");
    int k = n;
    for(int i = 1; i < n; i++){
        k--;
        for(int j = 1; j <= k; j++) printf("  ");
        for(int j = 0; j < i; j++) printf("%d ", j);
        for(int j = i; j > 0; j--) printf("%d ", j);
        printf("0\n");
    }

    k = 0;
    for(int i = n; i > 0; i--){
        for(int j = 1; j <= k; j++) printf("  ");
        for(int j = 0; j < i; j++) printf("%d ", j);
        for(int j = i; j > 0; j--) printf("%d ", j);
        printf("0\n");
        k++;
    }

    for(int j = 1; j <= n; j++) printf("  ");
    printf("0\n");


    return 0;
}
