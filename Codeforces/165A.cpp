#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<pair<int, int> > vc;
    int x, y;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        vc.push_back(make_pair(x, y));
    }


    int ans = 0;
    for(int i = 0; i < n; i++){
        int fl = 0;
        for(int k = 0; k < 4; k++){
            bool l = false;
            for(int j = 0; j < n; j++){
                if(i == j) continue;
                if(k == 0 && vc[i].first == vc[j].first && vc[i].second < vc[j].second) l = true;
                else if(k == 1 && vc[i].first == vc[j].first && vc[i].second > vc[j].second) l = true;
                else if(k == 2 && vc[i].first > vc[j].first && vc[i].second == vc[j].second) l = true;
                else if(k == 3 && vc[i].first < vc[j].first && vc[i].second == vc[j].second) l = true;
            }
            if(l == true) fl++;
        }
        if(fl >= 4) ans++;
    }
    printf("%d\n", ans);
    return 0;
}
