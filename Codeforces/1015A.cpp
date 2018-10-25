#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[101];
    memset(arr, 0, sizeof(arr));
    int n, m;
    vector<int>ans;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        int l, r;
        scanf("%d %d", &l, &r);
        for(int j = l; j <= r; j++){
            arr[j]++;
        }
    }
    for(int i = 1; i <= m; i++){
        if(arr[i] == 0) ans.push_back(i);
    }
    int sz = ans.size();
    printf("%d\n", sz);
    for(int i = 0; i < sz; i++)
        printf("%d ", ans[i]);
    printf("\n");

    return 0;
}
