#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    double sum = 0;
    double arr[n];
    for(int i = 0; i < n; i++){
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    int cnt = 0;
    sort(arr, arr+n);
    for(int i = 0; i < n; i++){
        double sum2 = sum;
        sum2 /= n;
        int ans = (int) round(sum2);
        if(ans == 5){
            printf("%d\n", i);
            return 0;
        }
        ans = 5 - (int)arr[i];
        sum += ans;
    }

    return 0;
}
