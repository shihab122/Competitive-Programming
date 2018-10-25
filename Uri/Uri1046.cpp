#include<iostream>
using namespace std;

int main(){
    int i,j;
    while(cin>>i>>j){
        int hours=0;
        if(i==j){
            i=i+1;
            hours++;
        }
        while(i!=j){
            hours++;
            i=i+1;
            i=i%24;

        }

        cout<<"O JOGO DUROU "<<hours<<" HORA(S)"<<endl;
    }
    return 0;
}
