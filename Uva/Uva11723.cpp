#include<bits/stdc++.h>

using namespace std;

int main(){
    int r,n,i=1;
    //ofstream fout;
    //fout.open("")
    while(cin>>r>>n){
        if(r==0&&n==0) return 0;
        int x,y,cnt=0;
        x=r-n;
        if(x<0){
            cout<<"Case "<<i<<": "<<0<<endl;
            i++;
            continue;
        }
        y=x/n;
        if(x%n!=0) cnt++;
        cnt+=y;
        if(cnt>26){
            cout<<"Case "<<i<<": "<<"impossible"<<endl;
            i++;
            continue;
        }
        cout<<"Case "<<i<<": "<<cnt<<endl;
        i++;
    }
    return 0;
}
