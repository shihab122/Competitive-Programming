#include<bits/stdc++.h>

using namespace std;

const int SIZE = 1e5+10;
int toggle[SIZE * 3], arr[SIZE];
char str[100100];

void build(int now, int le, int ri){
    toggle[now] = 0;
    if(le == ri){
        toggle[now] = arr[le];
        return;
    }
    int mid = (le + ri) / 2;
    build(now * 2, le, mid);
    build((now * 2) + 1, mid + 1, ri);
}

void update(int now, int le, int ri, int l, int r){
    if(r < le || ri < l) return;
    if(l <= le && ri <= r){toggle[now]++; return;}
    int mid = (le + ri) / 2;
    update(now * 2, le, mid, l, r);
    update((now * 2) + 1, mid + 1, ri, l, r);
}

int query(int now, int le, int ri, int pos){
    if(le == ri) return toggle[now];
    int mid = (le + ri) / 2;
    if(pos <= mid)
        return (query(now * 2, le, mid, pos) + toggle[now]);
    else
        return (query((now * 2) + 1, mid + 1, ri, pos) + toggle[now]);
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int n, q, u, v, sz;
        char ch;
        scanf("%s", str);
        sz = strlen(str);
        for(int j = 0; j < sz; j++) arr[j + 1] = str[j] - 48;
        build(1, 1, sz);
        scanf("%d", &n);
        printf("Case %d:\n", i);
        while(n--){
            getchar();
            scanf("%c", &ch);
            scanf("%d", &u);
            if(ch == 'I') scanf("%d", &v);
            if(ch == 'I') update(1, 1, sz, u, v);
            else{
                printf("%d\n", query(1, 1, sz, u) % 2);
            }

        }

    }

    return 0;
}
