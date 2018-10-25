#include <bits/stdc++.h>
using namespace std;
int parent[30000+100];
int mx[30000+100];
int find_parent(int x)
{
    if(parent[x]==x) return x;
    else return parent[x] = find_parent(parent[x]);
}
void Union(int a,int b)
{
    int x = find_parent(a) , y = find_parent(b);
    if(x==y) return;
    else
    {
        parent[x]=y;
        mx[y]+=mx[x];
    }
}
void makeset(int N)
{
    for(int i=1;i<=N;i++) parent[i] = i , mx[i] = 1 ;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int N,M,mx2=0;
        scanf("%d%d",&N,&M);
        memset(mx,0,sizeof(mx));
        memset(mx,0,sizeof(parent,0,sizeof(parent)));
        makeset(N);
        while(M--)
        {
            int a , b ;
            scanf("%d%d",&a,&b);
            Union(a,b);
        }
        for(int i=1;i<=N;i++){

            mx2=max(mx2,mx[i]);
        }
        printf("%d\n",mx2);


    }
    return 0;
}
