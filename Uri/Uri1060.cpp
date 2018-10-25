#include<iostream>
using namespace std;

int main(){
    double a[6];
    int cnt=0;
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    for(int i=0;i<6;i++){
        if(a[i]>0)
            cnt++;
    }
    cout<<cnt<<" valores positivos"<<endl;
    return 0;
}
