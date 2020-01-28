#include<bits/stdc++.h>

using namespace std;

int pi[1000005];

void prefixFunction(string s){
    int now;
    pi[0] = now = -1;
    for(int i = 1; i < s.size(); i++){
        while(now > -1 && s[now + 1] != s[i])
            now = pi[now];
        if(s[now + 1] == s[i]) pi[i] = ++now;
        else pi[i] = now = -1;
    }
}

int kmp(string a, string b){
    int now = -1;
    for(int i = 0; i < a.size(); i++){
        while(now > -1 && a[i] != b[now + 1])
            now = pi[now];
        if(a[i] == b[now + 1]) ++now;
        else now = -1;
    }
    now = (a.size() - now - 1) + a.size();
    return now;
}

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        string a, b;
        cin>>a;
        b = a;
        reverse(b.begin(), b.end());
        prefixFunction(b);
        printf("Case %d: %d\n", tes, kmp(a, b));
    }
    return 0;
}
