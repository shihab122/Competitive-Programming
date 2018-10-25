#include<iostream>
using namespace std;

int main(){
    int sh,sm,eh,em,rh,rm;
    while(cin>>sh>>sm>>eh>>em){
    rh=eh-sh;
    if(rh<0){
        rh=24+rh;
    }
    rm=em-sm;
    if(rm<0){
        rm=60+rm;
        rh--;
    }
    if(sh==eh&&sm==em)
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    else
        cout<<"O JOGO DUROU "<<rh<<" HORA(S) E "<<rm<<" MINUTO(S)"<<endl;
    }
    return 0;
}
