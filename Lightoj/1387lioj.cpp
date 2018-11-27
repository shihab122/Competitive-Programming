#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int n;
        long long ans = 0;
        scanf("%d", &n);
        printf("Case %d:\n", tes);
        while(n--){
            string s;
            cin>>s;
            if(s[0] == 'd'){
                int p;
                scanf("%d", &p);
                ans += p;
            }
            else printf("%lld\n", ans);
        }
    }

    return 0;
}
