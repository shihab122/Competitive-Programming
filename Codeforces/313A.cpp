#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    int n, l, r;
    int dp[s.size()];
    scanf("%d", &n);
    dp[0] = 0;
    for(int i = 1; i < s.size(); i++) {
        dp[i] = dp[i - 1];
        if(s[i] == s[i - 1]) dp[i]++;
    }
    for(int i = 0; i < n; i++){
        scanf("%d %d", &l, &r);
        l--, r--;
        printf("%d\n", abs(dp[r] - dp[l]));
    }
    return 0;
}
