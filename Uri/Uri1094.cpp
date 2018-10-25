#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int N,total=0,c=0,r=0,s=0;
    cin>>N;
    while(N--){
        int Amount;
        char Type;
        cin>>Amount>>Type;
        total=total+Amount;
        if(Type=='C')
            c=c+Amount;
        else if(Type=='R')
            r=r+Amount;
        else if(Type=='S')
            s=s+Amount;
    }
    cout<<fixed<<setprecision(2);
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<"Percentual de coelhos: "<<(c*100.00)/total<<" %"<<endl;
    cout<<"Percentual de ratos: "<<(r*100.00)/total<<" %"<<endl;
    cout<<"Percentual de sapos: "<<(s*100.00)/total<<" %"<<endl;
    return 0;
}
