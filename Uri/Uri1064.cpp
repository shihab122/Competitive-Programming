#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float a=0;
    float b=0;
    for(int i=0;i<6;i++){
        float c;
        cin>>c;
        if(c>=0){
            b=b+c;
            a=a+1;
        }
    }
    cout<<a<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1);
    cout<<b/a<<endl;
    return 0;
}
