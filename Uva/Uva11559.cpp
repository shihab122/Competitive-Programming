#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N,B,H,W;
    while(cin>>N>>B>>H>>W){
        long long cost=1000000000;
        for(int i=0;i<H;i++){
            long long p,q=0;
            cin>>p;
            for(int j=0;j<W;j++){
                int a;
                cin>>a;
                if(a>=N){
                    q=1;
                }
            }
            if(q) cost=min(cost,(p*N));
        }
        if(cost<=B&&cost!=1000000000){
            cout<<cost<<endl;
        }
        else cout<<"stay home"<<endl;
    }
    return 0;
}
