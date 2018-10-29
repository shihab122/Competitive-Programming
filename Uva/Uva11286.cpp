
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    while(scanf("%d", &a) && a){
        set<int>st;
        map<set<int>, int> mp;
        map<set<int>, int> :: iterator it;
        for(int i = 1; i <= a; i++){
            for(int j = 1; j <= 5; j++){
                scanf("%d", &b);
                st.insert(b);
            }
            mp[st]++;
            st.clear();
        }
        vector<int>vc;
        for(it =mp.begin(); it != mp.end(); it++) vc.push_back(it->second);
        sort(vc.rbegin(), vc.rend());

        int ans = 0, prev;
        for(int i = 0; i < vc.size(); i++){
            if(i == 0){
                ans += vc[i];
                prev = vc[i];
            }
            else if(prev == vc[i]) ans += vc[i];
            else break;
        }

        printf("%d\n", ans);
        mp.clear();
        st.clear();
        vc.clear();
    }
}
