#include<iostream>
using namespace std;

int main(){
    int j=1;
    for(float i=0;i<2.2;i+=0.2)
        for(int k=1;k<4;k++)
            cout<<"I="<<i<<" J="<<k+i<<endl;
    return 0;
}
