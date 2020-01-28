#include<bits/stdc++.h>
#define mx 10000
using namespace std;

int parent[10000];

int findparent(int p){
    if(parent[p]==p) return p;
    else return parent[p]=findparent(parent[p]);
}

void dsu(int x,int y){
    int a=findparent(x);
    int b=findparent(y);
    if(a==b) cout<<"There is already a way"<<endl;
    else parent[x]=y;
}

makeset(int n){
    for(int i=1;i<=n;i++) parent[i]=i;
}

int main(){
    int n;
    scanf("%d",&n);
    makeset(n);
    int M;
    scanf("%d",&M);
    while(M--){
        int a,b;
        scanf("%d %d",&a,&b);
        dsu(a,b);
    }

    return 0;
}
