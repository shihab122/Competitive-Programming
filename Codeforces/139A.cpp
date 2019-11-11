#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int arr[8];
    arr[0] = 0;
    for(int i = 0; i < 7; i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i = 0; ; i++){
        i = i % 7;
        sum += arr[i];
        if(sum >= n){
            printf("%d\n", i + 1);
            return 0;
        }
    }

    return 0;
}
