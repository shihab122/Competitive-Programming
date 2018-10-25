#include<bits/stdc++.h>

using namespace std;
int arr[1000 + 1];
bool visit[1000 + 1];

int dfs(int x){
    if(visit[x] == true) return x;
    visit[x] = true;
    return dfs(arr[x]);

}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &arr[i]);
    map<int, int> mp;
    for(int i = 1; i <= n; i++){
        memset(visit, false, sizeof(visit));
        int ans = dfs(i);
        printf("%d\n", ans);
    }
    return 0;
}
