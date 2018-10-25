#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    bool first=true;
    while(cin>>n){
        if(n==0) break;
        if(first) first =false;
        else cout<<endl;
        int y=1;
        for(int i=1234;i*n<=98765;i++){
            int t[10],a,u=1,b;
            memset(t,0,sizeof(t));
            a=i*n;
            if(i<=9999) t[0]++;
            if(a<=9999) t[0]++;
            if(a<100000){
                while(a){
                    t[a%10]++;
                    a/=10;
                }
                b=i;
                while(b){
                    t[b%10]++;
                    b/=10;
                }
                for(int i=0;i<10;i++){
                    if(t[i]>=2){
                        u=0;
                    }
                }
                if(u==1){
				printf("%05d / %05d = %d\n", i*n, i, n);
                    y=0;
                }
            }
        }
            if(y==1) cout<<"There are no solutions for "<<n<<"."<<endl;

    }
    return 0;
}
