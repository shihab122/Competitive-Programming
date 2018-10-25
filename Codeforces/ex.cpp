#include<bits/stdc++.h>
#define memo(a,b) memset(a,b,sizeof(a))
using namespace std;
typedef long long ll;

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    char s[a];
    cin>>s;
    for(int i=0;i<b;i++){
        int u,v;
        char x,y;
        scanf("%d%d",&u,&v);
        cin>>x>>y;
        for(int j=u-1;j<v;j++){
            if(s[j]==x) s[j]=y;
        }
    }
        cout<<s<<endl;

    return 0;
}

