#include<bits/stdc++.h>
#define mx 1000005

using namespace std;
int parent[mx];

int find(int x){
    if(x == parent[x]) return x;
    else return parent[x] = find(parent[x]);
}


int main(){
    int t, f = 0;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++) parent[i] = i;
        int s = 0, us = 0;
        char a;
        int x, y;
        while(getchar() != '\n');
        char line[100];
        while(gets(line) && sscanf(line, "%c %d %d", &a, &x, &y) == 3){
            if(a == 'c'){
                parent[find(parent[x])] = find(parent[y]);
            }
            else{
                if(find(x) != find(y)) us++;
                else s++;
            }
            //getchar();
        }
        if(f == 1) printf("\n");
        else f = 1;
        printf("%d,%d\n", s, us);
    }

    return 0;
}
