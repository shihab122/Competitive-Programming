#include<iostream>
using namespace std;

int main(){
    double A,B,C,big,medium,small;
    while(cin>>A>>B>>C){
    if(A>=B&&B>=C){
        big=A;
        medium=B;
        small=C;
    }
     else if(B>=A&&A>=C){
        big=B;
        medium=A;
        small=C;
    }
    else if(B>=A&&A<=C&&B>=C){
        big=B;
        medium=C;
        small=A;
    }
    else if(A>=B&&B<=C&&A>=C){
        big=A;
        medium=C;
        small=B;
    }
    else if(C>=A&&A>=B){
        big=C;
        medium=A;
        small=B;
    }
    else{
        big =C;
        medium=B;
        small=A;
    }
    if(big>=(medium+small))
        cout<<"NAO FORMA TRIANGULO"<<endl;
        else{
    if((big*big)==((medium*medium)+(small*small)))
        cout<<"TRIANGULO RETANGULO"<<endl;
    else if((big*big)>((medium*medium)+(small*small)))
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    else if((big*big)<((medium*medium)+(small*small)))
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    if(big==medium &&medium==small)
        cout<<"TRIANGULO EQUILATERO"<<endl;
    else if(((big==medium)&&(medium!=small))||((small==medium)&&(medium!=big))||((big==small)&&(medium!=small)))
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    }
    return 0;
}
