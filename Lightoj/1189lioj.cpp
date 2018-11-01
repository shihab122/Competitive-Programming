#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
vector<ll>vc;
ll arr[20];
bool visit[20];
ll sum, a;

void dfs(ll x){
    for(int i = 19; i >= 0; i--){
        if(arr[i] == x){
            if(visit[i] == false){
                visit[i] = true;
                sum += arr[i];
                vc.push_back(i);
                return;
            }
        }
        else if(arr[i] < x && visit[i] == false){
            visit[i] = true;
            vc.push_back(i);
            sum += arr[i];
            dfs(x - arr[i]);
            return;
        }
    }
}


int main(){
    int t;
    ll mul = 1;
    //freopen("in.txt", "w", stdout);
    scanf("%d", &t);
    for(ll i = 1; i < 20; i++){
        mul = mul * i;
        arr[i] = mul;
    }
    arr[0] = 1;
    for(int tes = 1; tes <= t; tes++){
        sum = 0;
        scanf("%lld", &a);
        memset(visit, false, sizeof(visit));
        vc.clear();
        dfs(a);
        printf("Case %d:", tes);
        if(sum != a) printf(" impossible\n");
        else{
            sort(vc.begin(), vc.end());
            for(int i = 0 ; i < vc.size(); i++){
                if(i == 0) printf(" %lld!", vc[i]);
                else if(vc[i] != vc[i - 1]) printf("+%lld!", vc[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
