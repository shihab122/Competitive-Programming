#include<iostream>
using namespace std;

int main(){
    unsigned int arr[100],large,index;
    for(int i=0;i<100;i++)
        cin>>arr[i];
    large=arr[0];
    index=1;
    for(int i=0;i<100;i++){
        if(large<arr[i]){
            large=arr[i];
            index=i+1;
        }
    }
    cout<<large<<endl;
    cout<<index<<endl;
    return 0;
}
