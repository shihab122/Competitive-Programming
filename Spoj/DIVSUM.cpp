#include<bits/stdc++.h>
#define mx 500005
using namespace std;

int arr[mx + 10];

int main(){
    memset(arr, 0, sizeof(arr));
    for(int i = 2; i <= mx; i++){
        for(int j = i + i; j <= mx; j += i)
            arr[j] += i;
    }

    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        if(n > 1) printf("%d\n", arr[n] + 1);
        else printf("0\n");
    }



    return 0;
}
