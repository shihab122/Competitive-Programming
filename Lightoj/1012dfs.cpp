#include<bits/stdc++.h>

using namespace std;

struct node{
    int r,c;
};

int adj[21][21];
int ans;
int arr[]={0,0,-1,1};
int arr1[]={-1,1,0,0};

void dfs(int u,int v){
    cout<<ans<<endl;
    if(adj[u][v]==-1||adj[u][v]==0) return;
    ans++;
    adj[u][v]=-1;
 //   cout<<ans<<endl;
    for(int i=0;i<4;i++){
        int row=u+arr[i],col=v+arr1[i];
        if(adj[row][col]==-1) continue;
        dfs(row,col);
    }
    return;
}

int main(){
    freopen("in.txt","w",stdout);
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
                    adj[j][k]=1;
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
        dfs(x,y);
       cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}

