#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    gcd(b,a%b);
}

int main()
{
    int n,u=0,v=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j=n-i;
        if(i<j){
            if(gcd(i,j)==1) u=i,v=j;
        }
    }

    cout<<u<<" "<<v<<endl;
    return 0;
}
