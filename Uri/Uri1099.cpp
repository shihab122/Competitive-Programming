#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    while(N--){
        int X,Y,sum=0;
        cin>>X>>Y;
        if(X<Y){
            for(int i=X+1;i<Y;i++){
                if(i%2!=0)
                    sum=sum+i;
            }
        }
        else{
            for(int i=Y+1;i<X;i++){
                if(i%2!=0)
                    sum=sum+i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
