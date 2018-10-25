#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n + 1], b[n + 1];
        int f = 0;
        for(int i = 1; i <= n; i++){
            scanf("%d", &a[i]);
        }
        for(int i = 1; i <= n; i++){
            scanf("%d", &b[i]);
        }
        for(int i = 1; i <= n - 2; i++){
            if(a[i] == b[i]) continue;
            else if(a[i] > b[i]){
                f = 1;
                break;
            }
            else{
                while(a[i] != b[i]){
                    a[i]++;
                    a[i + 1] += 2;
                    a[i + 2] += 3;
                }
            }
        }

        if(a[n] != b[n] || a[n - 1] != b[n - 1]) f = 1;
        if(f == 1) printf("NIE\n");
        else printf("TAK\n");
    }


    return 0;
}
