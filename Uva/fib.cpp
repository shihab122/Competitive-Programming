#include<bits/stdc++.h>

using namespace std;

int fibonacci(int x){
    if(x<=1){
     cout<<x<<endl;
     return x;
    }
    else{
        int r=fibonacci(x-1)+fibonacci(x-2);
        cout<<r<<endl;
        return r;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}
