#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[20],b[20],c[20];
    gets(a);
    gets(b);
    gets(c);
    if(!strcmp(a,"vertebrado")){
        if(!strcmp(b,"ave")){
            if(!strcmp(c,"carnivoro")){
                cout<<"aguia"<<endl;
            }
            else if(!strcmp(c,"onivoro"))
                cout<<"pomba"<<endl;
        }
        else if(!strcmp(b,"mamifero")){
            if(!strcmp(c,"onivoro"))
                cout<<"homem"<<endl;
            else if(!strcmp(c,"herbivoro"))
                cout<<"vaca"<<endl;
        }
    }
    else if(!strcmp(a,"invertebrado")){
        if(!strcmp(b,"inseto")){
            if(!strcmp(c,"hematofago")){
                cout<<"pulga"<<endl;
            }
            else if(!strcmp(c,"herbivoro"))
                cout<<"lagarta"<<endl;
        }
        else if(!strcmp(b,"anelideo")){
            if(!strcmp(c,"hematofago"))
                cout<<"sanguessuga"<<endl;
            else if(!strcmp(c,"onivoro"))
                cout<<"minhoca"<<endl;
            }
        }

    return 0;
}
