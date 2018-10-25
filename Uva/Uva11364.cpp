#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int m,x=-1,y=100,ans=0;
        scanf("%d",&m);
        for(int i=0;i<m;i++){
            int a;
            scanf("%d",&a);
            x=max(x,a);
            y=min(y,a);
        }
        ans=2*(x-y);
        printf("%d\n",ans);
    }
    return 0;
}
