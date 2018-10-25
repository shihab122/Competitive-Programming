#include<iostream>

using namespace std;

int main(){
    int X;
    while(1){
        cin>>X;
        if(X==0)
            break;
        else{
            for(int i=1;i<X;i++)
                cout<<i<<" ";
            cout<<X<<endl;
        }
    }
    return 0;
}
