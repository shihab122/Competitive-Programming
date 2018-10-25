#include<iostream>
using namespace std;

int main(){
    int X,Y;
    while(cin>>X>>Y){
        int sum=0;
        for(int i=Y+1;i<X;i++){
            if(i%2!=0)
                sum=sum+i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
