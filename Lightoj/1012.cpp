#include<bits/stdc++.h>

using namespace std;

struct node{
    int r,c;
};

int adj[21][21];
int ans;
int arr[]={0,0,-1,1};
int arr1[]={-1,1,0,0};

int bfs(int u,int v){
    queue<node>Q;
    adj[u][v]=-1;
    node obj;
    obj.r=u;
    obj.c=v;
    Q.push(obj);
    while(!Q.empty()){
        ans++;
        obj=Q.front();
        Q.pop();
        int row=obj.r,column=obj.c;
        for(int i=0;i<4;i++){
            int crR=row+arr[i],crC=column+arr1[i];
            if(adj[crR][crC]==1){
                obj.r=crR;
                obj.c=crC;
                Q.push(obj);
                adj[crR][crC]=-1;
            }
        }
    }
    return ans;
}

int main(){
//    freopen("in.txt","w",stdout);
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        memset(adj,0,sizeof(adj));
        int w,h,x,y;
        ans=0;
        scanf("%d%d",&w,&h);
        for(int j=1;j<=h;j++){
            for(int k=1;k<=w;k++){
                char c;
                cin>>c;
                if(c=='@'){
                    x=j,y=k;
                    adj[j][k]=0;
                }
                else if(c=='.'){
                    adj[j][k]=1;
                }
                else{
                    adj[j][k]=-1;
                }
            }
            getchar();
        }
       cout<<"Case "<<i<<": "<<bfs(x,y)<<endl;
    }
    return 0;
}
