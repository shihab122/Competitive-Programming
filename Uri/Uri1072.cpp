#include<iostream>
using namespace std;

int main(){
    int N;
    while(cin>>N){
        int cnt1=0,cnt2=0;
        while(N--){
            int X;
            cin>>X;
            if(X>=10&&X<=20)
                cnt1++;
            else
                cnt2++;
        }
        cout<<cnt1<<" in"<<endl;
        cout<<cnt2<<" out"<<endl;
    }
    return 0;
}
