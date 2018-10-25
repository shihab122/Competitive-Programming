#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,cnt=1;
    scanf("%d%d%d",&a,&b,&c);
    if(a%b==0){
        a*=10;
        int d=a/b;
        if(c==0) printf("2\n");
        else if(d==c) printf("1\n");
        else printf("-1\n");
        return 0;
    }
    else{
        for(int i=0;i<=1000000;i++){
            a*=10;
            int d =(a/b);
            if(d==c){
                printf("%d\n",cnt);
                return 0;
            }
                cnt++;
                a%=b;
            }
        }
        printf("-1\n");

    return 0;
}
