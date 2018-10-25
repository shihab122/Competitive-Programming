#include<iostream>
using namespace std;

int main(){
    int X,Y;
    while(cin>>X>>Y){
        if(X<Y)
            cout<<"Crescente"<<endl;
        else if(X>Y)
            cout<<"Decrescente"<<endl;
        else
            break;
    }
    return 0;
}
