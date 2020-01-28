#include<bits/stdc++.h>

using namespace std;

int binaryserch(int arr[],int n,int val){
    int low=0,high=n;
    while(low<=high){
        int mid=(high+low)/2;
        if(arr[mid]==val) return 1;
        else if(arr[mid]>val) high=mid-1;
        else low=mid+1;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    int x;
    cin>>x;
    cout<<binaryserch(arr,n,x)<<endl;
    return 0;
}
