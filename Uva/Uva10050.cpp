#include<bits/stdc++.h>

using namespace std;

int main(){

    int days[3651];
    for(int i = 6; i <= 3650; i += 7){
        days[i] = -1;
        if((i + 1) <= 3650) days[i + 1] = -1;

    }

    int t, b = 1;
    scanf("%d", &t);
    while(t--){

        int n, cnt = 0;
        scanf("%d", &n);
        int p;
        scanf("%d", &p);
        for(int i = 0; i <= n; i++){
            if(days[i] != -1) days[i] = 0;
        }

        for(int i = 0; i < p; i++){
            int x;
            scanf("%d", &x);
            for(int j = x; j <= n; j += x){
                if(days[j] == 0 && days[j] != -1){
                    days[j] = 1;
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }


    return 0;
}
