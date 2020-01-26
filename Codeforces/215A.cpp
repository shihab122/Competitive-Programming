#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr1[i]);

    int m;
    scanf("%d", &m);
    int arr2[m];
    for(int i = 0; i < m; i++) scanf("%d", &arr2[i]);

    int ans[10004];
    memset(ans, 0, sizeof(ans));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr2[j] % arr1[i] == 0)
                ans[arr2[j] / arr1[i]]++;

        }
    }

    for(int i = 10003; i > 0; i--){
        if(ans[i] > 0){
            printf("%d\n", ans[i]);
            return 0;
        }
    }

    return 0;
}
