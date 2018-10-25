#include<iostream>

using namespace std;

int main(){
    int N,first=0,second=1,sum;
    cin>>N;
    for(int i=1;i<N;i++){
        if(i==1)
            cout<<"0 ";
        else if(i==2)
            cout<<"1 ";
        else{
            sum=first+second;
            first=second;
            second=sum;
            cout<<sum<<" ";
        }
    }
            sum=first+second;
            first=second;
            second=sum;
            cout<<sum<<endl;
    return 0;
}
