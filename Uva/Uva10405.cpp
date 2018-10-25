#include<bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    while(getline(cin, a)){

        getline(cin, b);
        int s1 = a.size(), s2 = b.size();
        int dp[s1 + 1][s2 + 1];

        for(int i = 0; i <= s1; i++){
            for(int j = 0; j <= s2; j++){
                if(i == 0 || j == 0) dp[i][j] = 0;
                else if(a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        printf("%d\n", dp[s1][s2]);
    }

    return 0;
}
