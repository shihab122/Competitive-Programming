#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,x;
    cin>>n>>m>>x;
    x--;
    int i=x/n,j=x/m,k=n*m,l=0;
    i=(i*(i+1))/2;
    j=(j*(j+1))/2;
    i*=n;
    j*=m;
    l=x/k;
    l=(l*(l+1))/2;
    l*=k;
    l-=(i+j);
    cout<<abs(l)<<endl;
    return 0;
}
