#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    while(N--){
        int X;
        cin>>X;
        if(X==0)
            cout<<"NULL"<<endl;
        else if(X%2==0){
            if(X<0)
                cout<<"EVEN NEGATIVE"<<endl;
            else
                cout<<"EVEN POSITIVE"<<endl;
        }
        else{
            if(X<0)
                cout<<"ODD NEGATIVE"<<endl;
            else
                cout<<"ODD POSITIVE"<<endl;
        }
    }
    return 0;
}
