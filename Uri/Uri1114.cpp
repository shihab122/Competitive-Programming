#include<iostream>
using namespace std;

int main(){
    int password;
    while(cin>>password){
        if(password==2002){
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        else
            cout<<"Senha Invalida"<<endl;
    }
    return 0;
}
