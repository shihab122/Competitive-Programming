#include<bits/stdc++.h>
#define mp make_pair

using namespace std;
typedef long long ll;

struct node{
    ll a, b, c;
};

bool operator<(node x, node y){
    if(x.c == y.c) return x.a < y.a;
    else return x.c < y.c;
}


int main(){
    int x, y;
    while(1){
        scanf("%d %d", &x, &y);
        if(x == 0 && y == 0) break;

        ll arr[x];
        priority_queue<node>pq;
        node p;

        for(int i = 0; i < x; i++)
            scanf("%lld", &arr[i]);
        sort(arr, arr+x);
        for(int i = 0; i < x; i++){
            for(int j = i + 1; j < x; j++){
                p.a = arr[i];
                p.b = arr[j];
                p.c = arr[j] - arr[i];
                if(pq.size() == y && pq.top().c > p.c) pq.pop(), pq.push(p);
                else if(pq.size() < y) pq.push(p);
                else break;
            }
        }
        ll u = pq.top().a, v = pq.top().b;
        printf("%lld %lld\n", u, v);
        while(!pq.empty()){
            pq.pop();
        }

    }

    return 0;
}
