#include<bits/stdc++.h>

using namespace std;

int main(){
    int c,o;
    cin>>c>>o;
    if(o==0) cout<<"No"<<endl;
    else if(o==1&&c==0) cout<<"Yes"<<endl;
    else if(o==1&&c!=0) cout<<"No"<<endl;
    else{
        int x=o-1;
        if(x==c) cout<<"Yes"<<endl;
        else if(x>c) cout<<"No"<<endl;
        else{
            int y=c-x;
            if(y%2==0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
