#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    float a,b,c,d,e,avg;
    cin>>a>>b>>c>>d;
    avg=(a*2+b*3+c*4+d*1)/(10.0);
    printf("Media: %.1f\n", avg);
    if(avg>=7.0)
        cout<<"Aluno aprovado."<<endl;
    else if(avg>=5.0){
        cout<<"Aluno em exame."<<endl;
        cin>>e;
        cout<<"Nota do exame: " <<e<<endl;
        if(((avg+e)/2.0)>=5.0)
            cout<<"Aluno aprovado."<<endl;
        else
            cout<<"Aluno reprovado."<<endl;
             printf("Media final: %.1f\n", (avg+e)/2.0);
    }
        else
        cout<<"Aluno reprovado."<<endl;

    return 0;
}
