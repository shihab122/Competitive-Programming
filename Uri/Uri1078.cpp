#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int N;
    while(cin>>N){
        for(int i=1;i<=10;i++)
            cout<<i<<" x "<<N<<" = "<<N*i<<endl;
    }
    return 0;
}
