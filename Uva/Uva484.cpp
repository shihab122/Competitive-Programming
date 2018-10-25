#include<bits/stdc++.h>


using namespace std;

int main(){
    int a;
    map<int, long long> mp;
    vector<int>vc;
    while(scanf("%d", &a) != EOF){
        //if(a == 0) break;
        if(mp[a] == 0) vc.push_back(a);
        mp[a]++;
    }

    for(int i = 0; i < vc.size(); i++)
        printf("%d %lld\n", vc[i], mp[vc[i]]);

    return 0;
}
