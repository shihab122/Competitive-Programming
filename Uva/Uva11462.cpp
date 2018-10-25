#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(scanf("%d", &n)){
        if(n == 0) break;
        int arr[n];
        for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
        sort(arr, arr+n);
        for(int i = 0; i < n - 1; i++) printf("%d ", arr[i]);
        printf("%d", arr[n - 1]);
        printf("\n");
    }

    return 0;
}
