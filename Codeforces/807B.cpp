#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x,y,j=0;
    cin>>n>>x>>y;
    j = (y%50)*475;
    for(int i=0;i<25;i++){
    j = (j * 96 + 42)% 475;
    cout<<46+j<<endl;
    //cout<<j<<endl;
    }
    return 0;
}
