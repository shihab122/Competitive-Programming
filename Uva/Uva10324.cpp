#include<bits/stdc++.h>

using namespace std;

int main(){
    char s[1000015];
    int cnt=0,mn,mx,b;
    bool flag;
    while(scanf("%s %d",s,&b)==2){
        int len=strlen(s);
        if(len==0) break;
        cnt++;
        printf("Case %d:\n",cnt);
        while(b--){
            flag=false;
            scanf("%d %d",&mn,&mx);
            if(mn>mx){
                mx=mn+mx;
                mn=mx-mn;
                mx=mx-mn;
            }
            for(int j=mn;j<mx;j++){
                if(s[j]!=s[j+1]){
                    flag=true;
                    break;
                }
            }
            if(flag) printf("No\n");
            else printf("Yes\n");
        }
        //getchar();
    }
    return 0;
}
