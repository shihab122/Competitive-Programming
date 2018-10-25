#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, tes = 1;
    while(scanf("%d", &n)){
        if(n == 0) break;
        int arr[n], sum = 0;
        for(int i = 0; i < n; i++) scanf("%d", &arr[i]), sum += arr[i];

        sum /= n;
        int a = 0, b = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] >= sum) a += arr[i] - sum;
            b += abs(sum - arr[i]);
        }
        a = b - a;
        printf("Set #%d\n", tes++);
        printf("The minimum number of moves is %d.\n\n", a);

    }

    return 0;
}
