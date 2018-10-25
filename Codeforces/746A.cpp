#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    while(a>=1&&b>=2&&c>=4){
        sum+=7;
        a--;
        b-=2;
        c-=4;
    }
    cout<<sum<<endl;
    return 0;
}
