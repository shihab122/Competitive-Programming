#include<iostream>
using namespace std;

int main(){
    int M,N;
    while(cin>>M>>N){
        int sum=0;
        if(M<=0||N<=0)
            break;
        else if(M<N){
            for(int i=M;i<=N;i++){
                cout<<i<<" ";
                sum=sum+i;
            }
        }
        else{
            for(int i=N;i<=M;i++){
                cout<<i<<" ";
                sum=sum+i;
            }
        }
        cout<<"Sum="<<sum<<endl;
    }
    return 0;
}
