#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int n;
        scanf("%d", &n);
        int cnt = 0;
        while(n > 0){
            if(n % 2 != 0) cnt++;
            n /= 2;
        }
        if(cnt % 2 == 0) printf("Case %d: even\n", tes);
        else printf("Case %d: odd\n", tes);
    }

    return 0;
}
