#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, l, f = 0;
    scanf("%d %d", &n, &l);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    sort(arr, arr+n);

    double low = 0.0, high = l + 1, mid, sum;
    for(int i = 0; i < 100; i++){
        mid = (high + low) / 2.0;
        sum = 0;
        f = 0;
        for(int j = 0; j < n; j++){
            if(sum < arr[j] - mid) f = 1;
            sum = arr[j] + mid;
        }
        if(sum < (double)l) f = 1;
        if(f == 0) high = mid;
        else low = mid;
    }
    printf("%.10lf\n", low);

    return 0;
}
