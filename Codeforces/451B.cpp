#include<bits/stdc++.h>

using namespace std;

struct E{
    int u, v;
};

bool cmp(E a, E b){
    if(a.u != b.u) return a.u < b.u;
    else return a.v < b.v;
}

int main(){
    int n;
    scanf("%d", &n);
    vector<E>vc(n);
    E e;
    for(int i = 0; i < n; i++){
        scanf("%d", &vc[i].u);
        vc[i].v = i;
    }
    sort(vc.begin(), vc.end(), cmp);
    int x = 1, y = 1, cnt = 0;
    for(int i)

    printf("yes\n");
    printf("%d %d\n", x, y);

    return 0;
}
