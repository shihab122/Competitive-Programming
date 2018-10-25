#include<bits/stdc++.h>

using namespace std;

int main(){
    int v,e;
    scanf("%d %d",&v,&e);
    vector<int>vc[e];
    for(int i=0;i<e;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        vc[x]=y;
    }



    return 0;
}
