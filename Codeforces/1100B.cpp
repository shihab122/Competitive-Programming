#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[m + 1], cnt = 0, mp[n + 1];
    memset(mp, 0, sizeof(mp));
    for(int i = 0; i < m; i++){
        scanf("%d", &arr[i]);
        if(mp[arr[i]] == 0) mp[arr[i]] = 1, cnt++;
        else mp[arr[i]]++;
        if(cnt == n){
            arr[i] = 1;
            for(int j = 1; j <= n; j++){
                mp[j]--;
                if(mp[j] == 0) cnt--;
            }
        }
        else arr[i] = 0;
    }

    for(int i = 0; i < m; i++) printf("%d", arr[i]);


    return 0;
}
