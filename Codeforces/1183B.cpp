#include<bits/stdc++.h>

using namespace std;

int main(){
    int q;
    scanf("%d", &q);
    while(q--){
        int n, k;
        scanf("%d %d", &n, &k);
        int arr[n + 1];
        for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

        int ans = -1;
        for(int i = 0; i < n; i++){
            int x = abs(arr[i] + k);
            int y = abs(arr[i] - k);
            int f1 = 0, f2 = 0;
            if(abs(arr[i] - x) > k) f1 = 1;
            if(abs(arr[i] - y) > k) f2 = 1;
            for(int j = 0; j < n; j++){
                if(j == i) continue;
                if(x <= 0 || abs(arr[j] - x) > k){ f1 = 1; }
                if(y <= 0 || abs(arr[j] - y) > k) { f2 = 1;}
                if(f1 == 1 && f2 == 1) break;
            }
            if(f1 == 0) ans = max(ans, x);
            if(f2 == 0){ ans = max(ans, y);}
            //cout<<ans<<" hello"<<endl;

        }
        printf("%d\n", ans);
    }

    return 0;
}
