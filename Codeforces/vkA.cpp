#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,i=0;
    cin>>a>>b;
    if(a==b)
        cout<<"1"<<endl;
        else{
            while(1){
                i++;
                if(a*3>b*2){
                    cout<<i<<endl;
                    break;
                }
                a=a*3;
                b=b*2;
            }
        }
    return 0;
}
