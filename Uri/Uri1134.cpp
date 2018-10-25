#include<iostream>
using namespace std;

int main(){
    int arr[4]={0,0,0,0};
    while(1){
        int a;
        cin>>a;
        if(a==4)
            break;
        else
            arr[a]=arr[a]+1;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<arr[1]<<endl;
    cout<<"Gasolina: "<<arr[2]<<endl;
    cout<<"Diesel: "<<arr[3]<<endl;
    return 0;
}
