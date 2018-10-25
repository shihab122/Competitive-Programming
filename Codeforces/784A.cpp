#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int k,e,f,g,h,i;
    if(c==d)
        e=0;
    else
        e=1;
    if(a==1||b==1)
        k=1;
    else
        k=0;
    if(b==0||c==0)
        f=0;
    else
        f=1;
    if(a==1||d==1)
        g=1;
    else
        g=0;
    if(k==0||e==0)
        h=0;
    else
        h=1;
    if(f==g)
        i=0;
    else
        i=1;
    if(h==1||i==1)
        cout<<0<<endl;
    else
        cout<<1<<endl;


}
