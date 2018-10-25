#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n;
    scanf("%d",&n);
    ll arr[n+1],arr1[n+1],cnt=0,sum=0;

    for(int i=0;i<n;i++) scanf("%lld",&arr[i]);
    arr1[0] = 0;
    for(int i=1;i<n;i++){
        arr1[i] = abs(arr[i-1] - arr[i]);
        sum += arr1[i];
    }
    if(sum==0){
        printf("0\n");
        return 0;
    }
    ll mx = (sum/(n-1));
    if(sum%(n-1)>0) mx++;
    for(int i=n-1;i>=1;i--){
        ll lol = abs(arr1[i] - mx);

        if(lol > 1){
            printf("-1\n");
            return 0;
        }

        if(lol == 0) continue;
        cnt++;
        if(arr1[i-1] > mx) arr1[i-1] -= 1;
        else arr1[i-1] += 1;
    }

    printf("%lld\n",cnt);

    return 0;
}
