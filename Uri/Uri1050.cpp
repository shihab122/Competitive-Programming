#include<bits/stdc++.h>
using namespace std;

int main(){
    string str[72];
    str[61]="Brasilia";
    str[71]="Salvador";
    str[11]="Sao Paulo";
    str[21]="Rio de Janeiro";
    str[32]="Juiz de Fora";
    str[19]="Campinas";
    str[27]="Vitoria";
    str[31]="Belo Horizonte";
    unsigned int j;
    while(cin>>j){
        if(j>71)
            cout<<"DDD nao cadastrado"<<endl;
        else if(str[j]=="\0")
            cout<<"DDD nao cadastrado"<<endl;
        else
            cout<<str[j]<<endl;
    }
    return 0;
}
