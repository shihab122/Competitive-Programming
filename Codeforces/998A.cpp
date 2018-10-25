#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    int n;
    scanf("%d", &n);
    int arr[n+1], sum = 0;
    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    if(n == 1) printf("-1\n");
    else if(n == 2 && arr[1] == arr[2]) printf("-1\n");
    else{
        printf("1\n");
        for(int i = 1; i <= n; i++){
            int x = sum - arr[i];
            if(x != arr[i]){
                printf("%d\n", i);
                return 0;
            }
        }
    }

    return 0;
}
