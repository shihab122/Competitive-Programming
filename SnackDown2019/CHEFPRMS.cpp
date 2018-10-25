#include<bits/stdc++.h>
#define mx 202
using namespace std;

int main(){
    vector<int>vc, ans;
    vc.push_back(2);
    vector<bool>mark(mx, true);
    map<int, int>mp;
    for(int i = 3; i <= 200; i += 2){
        if(mark[i]){
            vc.push_back(i);
            for(int j = i * i; j < 200; j += i * 2)
                mark[j] = false;
        }
    }

    for(int i = 0; i < vc.size(); i++){
        for(int j = i + 1; j < vc.size(); j++){
            mp[vc[i] * vc[j]] = 1;
        }
    }

    int t;
    scanf("%d", &t);
    while(t--){
        int a, f = 0;
        scanf("%d", &a);
        int b = a / 2;
        for(int i = 6; i <= b; i++){
            if(mp[i] == 1 && mp[abs(i - a)] == 1){
                f = 1;
                break;
            }
        }
        if(f == 1) printf("YES\n");
        else printf("NO\n");
    }


    return 0;
}
