#include<bits/stdc++.h>

using namespace std;

int parent[10000],Rank[10000];

int findparent(int a){
    if(a==parent[a]) return a;
    else return parent[a]=findparent(parent[a]);
}



void unionfind(int a,int b){
    int x=findparent(a),y=findparent(b);
    if(x==y) cout<<"There is already a way"<<endl;
    else{
        if(Rank[x]>Rank[y]) parent[y]=x;
        else parent[x]=y;
        if(Rank[x]==Rank[y]) Rank[y]++;
    }
}

void makeset(int n){
    for(int i=1;i<=n;i++) parent[i]=i,Rank[i]=0;
}

int main(){
    int m,n;
    scanf("%d %d",&n,&m);
    makeset(n);

    while(m--){
        int a,b;
        scanf("%d %d",&a,&b);
        unionfind(a,b);
    }

    return 0;
}
