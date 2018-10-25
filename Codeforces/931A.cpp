#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int x=min(a,b),y=max(a,b),cnt=0;
    for(int i=1;x!=y;i++){
        x+=1;
        cnt+=i;
        if(x==y) break;
        y-=1;
        cnt+=i;
    }
    printf("%d\n",cnt);
    return 0;
}
