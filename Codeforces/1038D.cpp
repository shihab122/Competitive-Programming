#include<bits/stdc++.h>
#define mx 500020

using namespace std;
long long arr[mx];

struct Edge{
    long long u, v, w;
};

long long parent[mx];
vector<Edge>E;
Edge e;

bool cmp(Edge a, Edge b){
    return a.w < b.w;
}

long long find(long long x){
    if(x == parent[x]) return x;
    return parent[x] = find(parent[x]);
}

long long MST(){
    long long sz = E.size(), ans = 0;
    sort(E.begin(), E.end(), cmp);
    for(long long i = 0; i < sz; i++){
        e = E[i];
        if(find(parent[e.u]) != find(parent[e.v])){
            ans += (arr[e.u] - arr[e.v]);
            parent[parent[e.u]] = parent[e.v];
        }
    }
    return ans;

}

int main(){
    long long n;
    scanf("%lld", &n);
    for(long long i = 0; i < n; i++) scanf("%lld", &arr[i]);
    for(long long i = 0; i < n - 1; i++){
        e.u = i, e.v = i + 1, e.w = arr[i] - arr[i + 1];
        E.push_back(e);
    }
    for(long long i = 1; i <= n; i++) parent[i] = i;
    long long ans = MST();
    printf("%lld\n", ans);

    return 0;
}
