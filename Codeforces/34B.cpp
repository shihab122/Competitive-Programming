#include<bits/stdc++.h>

using namespace std;

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m];
    for(int i = 0; i < m; i++) scanf("%d", &arr[i]);

    sort(arr, arr + m);

    int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0) break;
        sum += arr[i];
    }


    printf("%d\n", abs(sum));


    return 0;
}
