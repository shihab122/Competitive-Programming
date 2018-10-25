#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float A,B,C;
    while(cin>>A>>B>>C){
            cout<<fixed<<setprecision(1);
        if(A+B>C&&B+C>A&&C+A>B)
            cout<<"Perimetro = "<<A+B+C<<endl;
        else
            cout<<"Area = "<<0.5*(A+B)*C<<endl;
    }
    return 0;
}
