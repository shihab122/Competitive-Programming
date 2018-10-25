#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    double A,B,C,d,R1,R2;
    while(cin>>A>>B>>C){
    d=(B*B)-(4*A*C);
    if(A>0&&d>=0){
        R1=(-B+(sqrt(d)))/(2*A);
        R2=(-B-(sqrt(d)))/(2*A);
        cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<R1<<endl;
        cout<<"R2 = "<<R2<<endl;
    }
    else{
        cout<<"Impossivel calcular"<<endl;
    }
    }
    return 0;
}
