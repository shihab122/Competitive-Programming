#include<bits/stdc++.h>
#define mx 1000000000
using namespace std;

int main(){
    int n;
    while(scanf("%d", &n)){
        if(n == 0) break;
        int space[n], mnspace = mx;
        for(int i = 0; i < n; i++){
            string s;
            cin.ignore();
            getline(cin, s);
            space[i] = 0;
            for(int j = 0; j < s.size(); j++)
                if(s[j] != 'X') space[i]++;

            mnspace = min(space[i], mnspace);
        }

        int ans = 0;
        for(int i = 0; i < n; i++)
            ans += space[i] - mnspace;

        printf("%d\n", ans);
    }


    return 0;
}
