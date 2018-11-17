#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    vector<int>vc;
    getchar();
    while(t--){
        vc.clear();
        string s;
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            int a = 0;
            while(i < s.size() && s[i] != ' ') a = (a * 10) + (s[i++] - '0');
            vc.push_back(a);
        }
        int ans = 0;
        for(int i = 0; i < vc.size(); i++){
            for(int j = i + 1; j < vc.size(); j++){
                if(__gcd(vc[i], vc[j]) > ans) ans = __gcd(vc[i], vc[j]);
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}
