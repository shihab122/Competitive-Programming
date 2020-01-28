#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d %d", &n, &m);
        vector<pair<int,int> > vc;
        for(int i = 1; i <= n; i++){
            int w;
            scanf("%d", &w);
            vc.push_back({i, w});
        }
        if(n < 3 || n > m) puts("-1");
        else{
            sort(vc.begin(), vc.end(), cmp);
            int mn = INT_MAX, f, s;
            vector<pair<int,int> > ans;
            int sum = 0;
            for(int i = 0; i < vc.size() - 1; i++){
                if(mn > (vc[i].second + vc[i + 1].second))
                    mn = (vc[i].second + vc[i + 1].second), f = vc[i].first, s = vc[i + 1].first;
                ans.push_back({vc[i].first, vc[i + 1].first});
                sum += vc[i].second + vc[i + 1].second;
            }
            ans.push_back({vc[vc.size() - 1].first, vc[0].first});
            sum += vc[0].second + vc[vc.size() - 1].second;
            int p = m - ans.size();
            sum += mn * p;
            printf("%d\n", sum);
            for(int i = 0; i < ans.size(); i++)
                printf("%d %d\n", ans[i].first, ans[i].second);
            for(int i = 0; i < p; i++) printf("%d %d\n", f, s);
        }
    }
    return 0;
}

