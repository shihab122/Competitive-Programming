#include<iostream>

using namespace std;

int main(){
    int N,i=1;
    cin>>N;
    while(N--){
        cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
        cout<<i<<" "<<(i*i)+1<<" "<<(i*i*i)+1<<endl;
        i++;
    }
}
