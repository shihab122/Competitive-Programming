#include<bits/stdc++.h>
#define mx 105


using namespace std;

int main(){
    int n, b;
    scanf("%d", &n);
    int arr[n];
    int mn = 100000;
    int ansA, ansB;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(i > 0 && abs(arr[i] - arr[i - 1]) < mn) ansA = i + 1, ansB = i, mn = abs(arr[i] - arr[i - 1]);
    }

    if(abs(arr[0] - arr[n - 1]) < mn) ansA = 1, ansB = n;

    printf("%d %d\n", ansA, ansB);

    return 0;
}
