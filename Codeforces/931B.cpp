#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,cnt=0,flag=0;
    scanf("%d%d%d",&n,&a,&b);

    int x=min(a,b),y=max(a,b);
    while(n>2){
       // cout<<a+1<<b<<endl;
        cnt++;
        if((x+1)==y&&x%2!=0){
            flag=1;
            break;
        }
        if(x%2==0)
            x=max(1,x/2);
        else
            x=max(1,(x/2)+1);
        if(y%2==0)
            y=max(1,y/2);
        else
            y=max(1,(y/2)+1);
        n/=2;
    //    cout<<x<<" "<<y<<" "<<n<<endl;
    }
    //cout<<flag<<endl;
    if(flag==1) printf("%d\n",cnt);
    else printf("Final!\n");
    return 0;
}
