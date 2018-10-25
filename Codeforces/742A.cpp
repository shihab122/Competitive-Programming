#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={6,8,4,2};
    long long n;
    while(cin>>n){
    if(n==0)
        cout<<"1"<<endl;
    else
        cout<<arr[n%4]<<endl;
    }
    return 0;
}
