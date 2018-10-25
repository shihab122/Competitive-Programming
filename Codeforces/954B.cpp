#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int mn = n;
    string s;
    cin>>s;
    map<string, int> mp;
    vector<string> vc;
    for(int i = 2; i <= (n / 2); i++){
        for
    }

    for(int i = 0; i < vc.size(); i++){
        int x = mp[vc[i]];
        int y = vc[i].size();
        if(x > 1){
            int c = y + 1 + (n - (2 * y));
            mn = min(mn, c);
        }
    }

    printf("%d\n", mn);

    return 0;
}
