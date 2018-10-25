#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int, int> mp;
    map<int, int>:: iterator it;
    int x, y, ans = 0;
    vector<int>vc;
    scanf("%d %d", &x, &y);
    for(int i = 0; i < y; i++){
        int z;
        scanf("%d", &z);
        if(mp[z] == 0) vc.push_back(z);
        mp[z]++;
    }
    for(int i = 103; i >= 1; i--){
        int tot = 0;
        for(int j  = 0; j < vc.size(); j++)
            tot += (mp[vc[j]] / i);
        if(tot >= x){
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");


    return 0;
}
