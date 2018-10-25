#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int N;
    cin>>N;
    cout<<fixed<<setprecision(1);
    while(N--){
        int x,y;
        cin>>x>>y;
        if(y==0){
            cout<<"divisao impossivel"<<endl;
        }
        else{
            cout<<(float)x/(float)y<<endl;

        }
    }
    return 0;
}
