#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float salary;
    cout<<fixed<<setprecision(2);
    while(cin>>salary){
        float tax=0;
        if(salary>=0&&salary<=2000)
            cout<<"Isento"<<endl;
        else if(salary>2000&&salary<=3000){
            tax=(salary-2000)*0.08;
            cout<<"R$ "<<tax<<endl;
        }
        else if(salary>3000&&salary<=4500){
            tax=((salary-3000)*0.18)+80;
            cout<<"R$ "<<tax<<endl;
        }
        else{
            tax=((salary-4500)*0.28)+350;
            cout<<"R$ "<<tax<<endl;
        }
    }
    return 0;
}
