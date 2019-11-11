#include<bits/stdc++.h>

using namespace std;

int func(int a){
    int sum = 0;
    while(a > 0){
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main(){
    int arr[10010];
    memset(arr, 0, sizeof(arr));
    for(int i = 1; i <= 10009; i++){
        if( func(i) % 4 == 0) arr[i] = 1;

    }

    int a;
    scanf("%d", &a);
    while(arr[a] != 1) a++;
    printf("%d\n", a);

    return 0;
}
