#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    for(int i = 0; i < 10; i++){
        if((a * 10 + i) % b == 0){
            printf("%d%d", a, i);
            for(int j = 1; j < n; j++)
                printf("0");
            return 0;
        }
    }
    printf("-1");

    return 0;
}
