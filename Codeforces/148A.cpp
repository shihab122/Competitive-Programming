#include<bits/stdc++.h>

using namespace std;
int mp[100005];
int main(){
    int arr[4], d;
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &d);
    int ans = 0;
    for(int j = 0; j < 4; j++){
        for(int i = arr[j]; i <= d; i += arr[j])
            ans += (mp[i]++ == 0);
    }
    printf("%d\n", ans);

    return 0;
}
