#include<iostream>
using namespace std;

int main(){
    int N,j=2;
    cin>>N;
    for(int i=2;i<=N;i+=2)
        cout<<i<<"^"<<j<<" = "<<i*i<<endl;
    return 0;
}
