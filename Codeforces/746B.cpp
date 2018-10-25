#include<bits/stdc++.h>

using namespace std;

int main(){
    int b=0,n;
    cin>>n;
    string a;
    cin>>a;
    if(n==1){
        cout<<a<<endl;
    }
    else{
        while(n!=0){
            if(n==1)
                n--,cout<<a[n];
            else if(n%2!=0){
                cout<<a[(n/2)];
                n--;
                cout<<(n/2)<<endl;
            }
            else{
                cout<<a[((n+1)/2)];
                n--;
                cout<<n<<endl;
            }
        }
    }
    return 0;
}
