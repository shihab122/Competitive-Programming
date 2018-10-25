#include<iostream>
using namespace std;

int main(){
    int c=0;
    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        if(a%2==0)
            c+=1;
    }
    cout<<c<<" valores pares"<<endl;
    return 0;
}
