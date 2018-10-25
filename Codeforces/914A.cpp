#include<bits/stdc++.h>

using namespace std;

int main(){
    bool arr[1000001];
    memset(arr,false,sizeof(arr));
    for(int i=0;i<1001;i++) arr[i*i]=true;
    int x;
    scanf("%d",&x);
    int arr1[x];
    for(int i=0;i<x;i++) scanf("%d",&arr1[i]);
    sort(arr1,arr1+x);
    for(int i=x-1;i>=0;i--){
        if(arr1[i]<0){
            cout<<arr1[i]<<endl;
            break;
        }
        else if(arr[arr1[i]]==false){
            cout<<arr1[i]<<endl;
            break;
        }
    }
    return 0;
}
