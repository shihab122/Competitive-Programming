/*#include<bits/stdc++.h>
#define mx 1000005
#define pii pair<int, int>

using namespace std;


vector<int>divisor[mx];
int parent[mx], cnt[mx];
vector<pii>vc;

void reset(){
    for(int i = 2; i < mx; i++)
        parent[i] = i, cnt[i] = 0;
    vc.clear();
}

int find(int x){
    if(x == parent[x]) return x;
    else return parent[x] = find(parent[x]);
}

bool cmp(pii a, pii b){
    if(a.first != b.first) return a.first < b.first;
    else return a.second < b.second;
}

void MST(){
    int sz = vc.size();
    for(int i = 0; i < sz; i++){
        int x = find(parent[vc[i].first]);
        int y = find(parent[vc[i].second]);
        if(x != y){
            if(x <= y)
                parent[parent[vc[i].second]] = parent[vc[i].first];
            else parent[parent[vc[i].first]] = parent[vc[i].second];
        }
    }
    return;
}

int main(){
    for(int i = 2; i <= 1000000; i++){
        for(int j = i; j <= 1000000; j += i){
            divisor[j].push_back(i);
        }
    }

    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int n;
        scanf("%d", &n);
        int arr[n];
        reset();
        int ans = 0;
        for(int i = 0; i < n ; i++){
            scanf("%d", &arr[i]);
            if(arr[i] == 1) ans++;
            else{
                int sz = divisor[arr[i]].size();
                for(int j = 0; j < sz; j++){
                    int y = divisor[arr[i]][j];
                    vc.push_back(pii(arr[i], y));
                }
            }
        }

        sort(vc.begin(), vc.end(), cmp);
        MST();

        for(int i = 0; i < n; i++){
            if(arr[i] == 1) continue;
            else{
                int z = find(parent[arr[i]]);
                if(cnt[z] == 0){
                    cnt[z]++;
                    ans++;
                }
            }
        }
        printf("Case %d: %d\n", tes, ans);
    }


    return 0;
}
*/

#include<bits/stdc++.h>
#define mx 10000005

using namespace std;

vector<int>divisor[mx];
int parent[mx], cnt[mx];

int find(int x){
    if(x == parent[x]) return x;
    else return parent[x] = find(parent[x]);
}

void reset(){
    for(int i = 2; i < mx; i++)
        parent[i] = i, cnt[i] = 0;
}

int main(){
    for(int i = 2; i <= 1000000; i++){
        for(int j = i; j <= 1000000; j += i){
            divisor[j].push_back(i);
        }
    }
    //freopen("in.txt", "w", stdout);
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int n, ans = 0;
        scanf("%d", &n);
        reset();
        int arr[n];
        for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

        sort(arr, arr+n);
        for(int i = 0; i < n; i++){
            if(arr[i] == 1) ans++;
            else{
                int sz = divisor[arr[i]].size();
                int p = find(parent[divisor[arr[i]][0]]);

                for(int j = 1; j < sz; j++){
                    int y = find(parent[divisor[arr[i]][j]]);
                    if(p != y){
                        parent[y] = p;
                    }
                }
            }
        }

        for(int i = 0; i < n; i++){
            if(arr[i] == 1) continue;
            else{
                int x = find(parent[arr[i]]);
                if(cnt[x] == 0){
                    cnt[x]++;
                    ans++;
                }
            }
        }
        printf("Case %d: %d\n", tes, ans);
    }



    return 0;
}
