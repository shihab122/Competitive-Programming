#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int h,m,x;
    scanf("%d%d%d",&x,&h,&m);
    int h1=h%10;
    int m1=m%10;
    if(h1==7||m1==7) cout<<0<<endl;
    else{
        int ans=0;
        for(int i=1;;i++){
            if(m>=x){
                m-=x;
            }
            else{
                m+=60;
                m-=x;
                if(h-1<0) h=23;
                else h=h-1;
            }
            if(h%10==7||m%10==7){
                cout<<i<<endl;
                return 0;
            }
        }
    }
    return 0;
}
