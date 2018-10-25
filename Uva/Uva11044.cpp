#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    //freopen("input3.txt","w",stdout);
    scanf("%d",&T);
    while(T--){
        int n,m;
        scanf("%d%d",&n,&m);
        int u,v;
        u=n/3;
        v=m/3;
        u=u*v;
        printf("%d\n",u);
    }
    return 0;
}
