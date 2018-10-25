#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n!=0){
    int dx,dy;
    cin>>dx>>dy;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(x==dx||y==dy)
            cout<<"divisa"<<endl;
        else if (x>dx&&y>dy)
            cout<<"NE"<<endl;
        else if(x<dx&&y>dy)
            cout<<"NO"<<endl;
        else if(x>dx&&y<dy)
            cout<<"SE"<<endl;
        else if(x<dx&&y<dy)
            cout<<"SO"<<endl;
    }
    cin>>n;
    }
    return 0;
}
