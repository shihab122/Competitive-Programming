#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> vc, ans, vc2;
    map<int, int> mp;
    int x;
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        vc.push_back(x);
        vc2.push_back(x);
    }

    ll pr = 0;
    sort(vc.rbegin(), vc.rend());
    for(int i = 0; i < k; i++){
        mp[vc[i]]++;
        pr += vc[i];
    }

    int j = 0, y = 0, s = n;
    printf("%lld\n", pr);

    for(int i = 0; i < n; i++){
        j++;
        if(mp[vc2[i]] != 0 && (y + 1) != k){
            ans.push_back(j);
            mp[vc2[i]]--;
            j = 0;
            y++;
        }
        else if(y == k - 1){
            ans.push_back(s);
            break;
        }
        s--;
    }
    for(int i = 0; i < ans.size(); i++) printf("%d ", ans[i]);
    printf("\n");

    return 0;
}
