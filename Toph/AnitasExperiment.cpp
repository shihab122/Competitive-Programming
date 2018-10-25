#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, cnt = 1, p = 1, ct = 1, ans;
        scanf("%d", &n);
        int arr[n + 1], ar[n + 1];
        ar[0] = 0, arr[0] = 0;
        for(int i = 1; i <= n; i++){
            scanf("%d", &arr[i]);
            if(arr[i] == arr[i - 1]) ar[i] = ar[i - 1];
            else ar[i] = (arr[i] - arr[i - 1]) + ar[i - 1];
        }
        for(int i = 1; i <= n; i++){
            cout<<ar[i]<<" ";
            if(ar[i] == ar[i - 1] && ar[i] == ar[i + 1]) ans++;
            if(n == 1) cnt++;
            else if(ar[i - 1] == ar[i] && ar[i] == 0){
                p++;
            }
            else if(ar[i] > 0) cnt++;
            else ct++;

        }
        cout<<endl;
        if(cnt == n) printf("allGoodDays\n");
        else if(p == n) printf("neutral\n");
        else if(ct == n) printf("allBadDays\n");
        else if(cnt < 2) printf("none\n");
        else printf("%d\n", cnt);
    }

    return 0;
}
