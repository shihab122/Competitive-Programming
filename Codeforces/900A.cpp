#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,o=0,y=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        if(u<0) o++;
        else y++;
    }
    if(o==1||y==1) cout<<"Yes"<<endl;
    else if(o==0||y==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
