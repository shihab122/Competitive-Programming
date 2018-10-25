#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 0; tes < t; tes++){
        int n, cnt = 0;
        scanf("%d", &n);
        vector<int>arr(n);
        for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
        map<vector<int>, int> mp;
        while(1){
            cnt = 0;
            if(mp[arr] == 1){
                printf("LOOP\n");
                break;
            }
            mp[arr] = 1;
            int temp = arr[0];
            for(int i = 0; i < n; i++){
                if(i == n-1) arr[i] = abs(arr[i] - temp);
                else arr[i] = abs(arr[i] - arr[i+1]);
                if(arr[i] == 0) cnt++;
            }
            if(cnt == n){
                printf("ZERO\n");
                break;
            }
        }
    }

    return 0;
}
