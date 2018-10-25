#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a1,b1,a2,b2;
        scanf("%d %d %d %d",&a1,&b1,&a2,&b2);
        int x=a1+a2;
        int y=b1+b2;
        if(x==y){
            if(b1>a2) printf("2\n");
            else if(a2>b1) printf("1\n");
            else printf("-1\n");
        }
        else if(x>y) printf("1\n");
        else printf("2\n");

    }


    return 0;
}
