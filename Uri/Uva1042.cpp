#include<iostream>
using namespace std;

int main(){
    int arr[3],key,arr2[3];
    for(int i=0;i<3;i++)
        cin>>arr[i];
    for(int i=0;i<3;i++)
        arr2[i]=arr[i];
    for(int i=1;i<3;i++){
        key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<3;i++)
        cout<<arr[i]<<endl;
    cout<<endl;
    for(int i=0;i<3;i++)
        cout<<arr2[i]<<endl;
    return 0;
}
