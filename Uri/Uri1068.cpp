#include<iostream>
using namespace std;

int main(){
    int b=0,c=0,d=0,e=0;
    int n=5;
    while(n--){
        int a;
        cin>>a;
        if(a%2==0){
            b++;
            if(a>0)
                c++;
            else if(a<0)
                d++;
        }
        else{
            e++;
            if(a>0)
                c++;
            else if(a<0)
                d++;
        }

    }
    cout<<b<<" valor(es) par(es)"<<endl;
    cout<<e<<" valor(es) impar(es)"<<endl;
    cout<<c<<" valor(es) positivo(s)"<<endl;
    cout<<d<<" valor(es) negativo(s)"<<endl;
    return 0;
}
