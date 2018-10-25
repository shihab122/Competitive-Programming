#include<iostream>
using namespace std;

int main(){
    int N,i=1;
    cin>>N;
    while(N--){
        int j=3;
        while(j--){
            cout<<i<<" ";
            i++;
        }
        i++;
        cout<<"PUM"<<endl;
    }
    return 0;
}
