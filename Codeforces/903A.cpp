#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
  while(  scanf("%d",&n)){
    for(int i=0;i<n;i++){
        int a,c,d,flag=0;
        scanf("%d",&a);
        c=a,d=a;
        while(1){
            if(c<7&&d<3) break;

            c=c-7;
            d=d-3;
            if(c==0||d==0){
                printf("YES\n");
                flag=1;
                break;
            }
            if(c>0&&c%3==0){
                printf("YES\n");
                flag=1;
                break;
            }
            if(d>0&&d%7==0){
                printf("YES\n");
                flag=1;
                break;
            }
        }
        if(flag == 0)printf("NO\n");
    }
}
    return 0;
}
