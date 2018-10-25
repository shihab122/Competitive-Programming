#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        string a;
        cin>>a;
        int cnt=0;
        for(int i=0;i<m;i++){
            int x;
            char ch;
            scanf("%d %c",&x,&ch);
            a[x-1]=ch;

            string str=a;
            reverse(str.begin(),str.end());
            if(a==str) cnt++;

        }
        printf("%d\n",cnt);

    }

    return 0;
}
