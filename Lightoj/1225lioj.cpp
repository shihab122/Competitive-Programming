#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char ch[11],sh[11];
        scanf("%s",&ch);
        strcpy(sh,ch);
        reverse(ch,ch+strlen(ch));
        printf(strcmp(ch,sh)==0 ? "Case %d: Yes\n":"Case %d: No\n",i);
       // else printf("Case %d: No\n",i);
    }

    return 0;
}
