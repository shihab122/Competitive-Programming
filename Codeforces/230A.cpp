#include<bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;

bool cmp(pii a, pii b){
    if(a.first < b.first) return true;
    else return false;
}

int main(){
    int s, n;
    scanf("%d %d", &s, &n);
    int flag = 1;
    pii pai;
    vector<pii> vc;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &pai.first, &pai.second);
        vc.push_back(pai);
    }
    sort(vc.begin(), vc.end(), cmp);
    for(int i = 0; i < n; i++){
        if(s > vc[i].first) s += vc[i].second;
        else flag = 0;
    }

    if(flag == 0) printf("NO\n");
    else printf("YES\n");

    return 0;
}
