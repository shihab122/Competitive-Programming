#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    //freopen("in.txt", "w", stdout);
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int n, k;
        scanf("%d %d", &n, &k);
        n++, k++;
        int arr[n], sum = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        int low = 0;
        int high = sum;
        int mid, j;
        while(high >= low){
            mid = (low + high) / 2;
            j = 0;
            for(int i = 1; i <= k; i++){
                sum = 0;
                for(; j < n; j++){
                    if(sum + arr[j] > mid) break;
                    sum += arr[j];
                }
            }
            if(j < n) low = mid + 1;
            else high = mid - 1;
        }
        printf("Case %d: %d\n", tes, low);
        for (int i = k, j = 0; i > 0; i--){
            sum = 0;
            for (; n-j >= i; j++){
                if (sum+arr[j] > low) break;
                sum += arr[j];
            }
            printf ("%d\n",sum);
        }

    }


    return 0;
}
