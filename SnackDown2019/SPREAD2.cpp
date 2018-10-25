#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n + 1], ans[n + 1], d = 0, sum = 0;
        memset(ans, 0 , sizeof(ans));
        for(int i = 1; i <= n; i++){
            scanf("%d", &arr[i]);
        }
        int j = 1;
        sum = arr[1];
        while(ans[n]!=1){
            int k = sum;
            while(k--){
                ans[++j] = 1;
                if(ans[n] == 1) break;
                sum += arr[j];
            }
            d++;
        }
        printf("%d\n", d);
    }


    return 0;
}
