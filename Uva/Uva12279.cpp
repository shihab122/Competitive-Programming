#include<bits/stdc++.h>

using namespace std;

int main(){
//    freopen("in.txt","w",stdout);
    int n,c=0;
    while(scanf("%d",&n),(n||0)){
        int x=0,y=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==0) y++;
            else x++;
        }
        x=x-y;
        printf("Case %d: %d\n",++c,x);
    }
    return 0;
}
