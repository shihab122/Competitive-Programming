#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, e = 0, s = 0, mx = 0;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 1) e++;
        if(arr[i] == -1) s++;
        //cout<<e<<" "<<s<<endl;
    }
    for(int i = 1; i <= n; i++){
        int j = 0, c = i, u = e, v = s;
        while(1){
            if(c <= 0) break;
            if(arr[c] == 1) u--;
            else v--;
            c -= k;
        }
        c = i + k;

        while(1){
            if(c > n) break;
            if(arr[c] == 1) u--;
            else v--;
            c += k;
        }
        mx = max(mx, abs(u - v));
    }
    printf("%d\n", mx);

    return 0;
}
