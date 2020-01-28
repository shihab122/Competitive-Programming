#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",arr+i);
    int val;
    cin>>val;
    cout<<binary_search(arr,arr+n,val)<<endl;

    return 0;
}
