#include<bits/stdc++.h>

using namespace std;

int main(){
 //   freopen("in.txt","w",stdout);
    float h,u,d,f;
    while(scanf("%f%f%f%f",&h,&u,&d,&f)){
        if(h==0) break;
        int cnt=0,flag=0;
        float fe=(f*u)/100,amount=0;
        while(1){
            if(amount<0){
                flag=1;
                break;
            }
            else if(amount>h) break;
            else{
                amount+=u;
                if(u>0) u-=fe;
                cnt++;
                if(amount>h) break;
                amount-=d;
         //       cout<<amount<<endl;
            }

        }
        if(flag==0) cout<<"success on day "<<cnt<<endl;
        else cout<<"failure on day "<<cnt<<endl;
    }

    return 0;
}
