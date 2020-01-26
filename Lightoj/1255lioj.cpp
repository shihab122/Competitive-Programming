#include<bits/stdc++.h>
#define mx 1000005
using namespace std;

int pi[mx];
void prefixFunction(string t){
    int now;
    pi[0] = now = -1;
    for(int i = 1; i < t.size(); i++){
        while(now != -1 && t[now + 1] != t[i])
            now = pi[now];
        if(t[now + 1] == t[i]) pi[i] = ++now;
        else pi[i] = now = -1;
    }
}

void kmp(string s, string t){
    int now = -1, ans = 0;
    int n = s.size();
    int m = t.size();
    for(int i = 0; i < s.size(); i++){
        while(now != -1 && t[now + 1] != s[i])
            now = pi[now];
        if(t[now + 1] == s[i]) ++now;
        else now = -1;
        if(now + 1 == t.size()){
            ans++, now = -1;
            if(pi[t.size() - 1] == t.size() - 2){
                while(i + 1 < n && s[i + 1] == t[t.size() - 1]){
                    ans++, i++;
                }
            }
        }
    }
    printf("%d\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        string s, t;
        cin>>s>>t;
        printf("Case %d: ", tes);
        prefixFunction(t);
        kmp(s, t);
    }

    return 0;
}
