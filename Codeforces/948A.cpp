#include<bits/stdc++.h>

using namespace std;

int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    char ch[n+2][m+2];
    for(int i=0;i<=m+1;i++) ch[0][i]='.',ch[n+1][i]='.';
   // cout<<"Yes"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
        cin>>ch[i][j];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(ch[i][j]=='W'){
                for(int k=0;k<4;k++){
                    if(ch[i+x[k]][j+y[k]]=='S'){
                        printf("No\n");
                        return 0;
                    }
                    else if(ch[i+x[k]][j+y[k]]=='.') ch[i+x[k]][j+y[k]]='D';
                }
            }
           // cout<<"yes"<<endl;
        }
    }
    printf("Yes\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
        cout<<ch[i][j];
        cout<<endl;
    }
    return 0;
}
