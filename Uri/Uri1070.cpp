#include<iostream>
using namespace std;

int main(){
    int X;
    while(cin>>X){
        int cnt=0;
        while(cnt<6){
            if(X%2!=0){
                cnt++;
                cout<<X<<endl;
            }
            X=X+1;
        }
    }
    return 0;
}
