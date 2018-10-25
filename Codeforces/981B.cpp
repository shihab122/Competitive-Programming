#include<bits/stdc++.h>

using namespace std;

struct Node{
    int pos, val;
};

bool cmp(Node a, Node b){
    if( a.pos != b.pos) return a.pos > b.pos;
    else return a.val > b.val;
}

int main(){
    int n, m, x = 0;
    long long ans = 0;
    scanf("%d", &n);
    vector<Node> vc;
    for(int i = 0; i < n; i++){
        Node v;
        scanf("%d %d",&v.pos, &v.val);
        vc.push_back(v);
    }

    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        Node v;
        scanf("%d %d",&v.pos, &v.val);
        vc.push_back(v);
    }

    sort(vc.begin(), vc.end(), cmp);

    for(int i = 0; i < vc.size(); i++){
        if(x != vc[i].pos ) ans += vc[i].val;
        x = vc[i].pos;
    }

    printf("%lld\n", ans);
    return 0;
}
