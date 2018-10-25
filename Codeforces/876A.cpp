#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,c,d=1,s=0;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    n--;
    while(n--){
        if(d==1){
            if(a<b){
                d=2;
                s+=a;
            }
            else{
                d=3;
                s+=b;
            }
        }
        else if(d==2){
            if(a<c){
                d=1;
                s+=a;
            }
            else{
                d=3;
                s+=c;
            }
        }
        else{
            if(b<c){
                d=1;
                s+=b;
            }
            else{
                d=2;
                s+=c;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
