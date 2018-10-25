#include<iostream>

using namespace std;

int main(){
    int a,n;
    while(cin>>a){
loop:
        cin>>n;
        int sum=0;
        if(n<=0)
            goto loop;
        while(n--){
            sum=sum+a;
            a++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
