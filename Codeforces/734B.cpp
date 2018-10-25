#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,x,y;
    cin>>a>>b>>c>>d;
    y=min(a,c);
    y=min(y,d);
    a-=y;
    x=min(b,a);
    cout<<((x*32)+(y*256))<<endl;
    return 0;
}
