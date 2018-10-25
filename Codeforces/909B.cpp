#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,arr[108];
    cin>>n;
    arr[1]=1;
    arr[2]=arr[1]+1;
    arr[3]=arr[2]+2;
    for(int i=4;i<=107;i++){
        arr[i]=i+arr[i-2];
    }
    cout<<arr[n]<<endl;
    return 0;
}
