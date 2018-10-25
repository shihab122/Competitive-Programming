#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        n=(((((n*567)/9)+7492)*235)/47)-498;
        if(n<0)
            n=n*(-1);
        n=n/10;
        n=n%10;
        cout<<n<<endl;
    }
    return 0;
}
