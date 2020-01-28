#include<bits/stdc++.h>

using namespace std;

int main(){
    cout<<fixed;
    cout<<setprecision(3);
    vector<int>vc;
    int n,lis=0;
    cin>>n;
    int arr[n+1],LIS[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        vector<int>::iterator iv=lower_bound(vc.begin(),vc.end(),arr[i]);
        if(vc.end()==iv){
            vc.push_back(arr[i]);
            lis++;
            LIS[i]=lis;
        }
        else{
            LIS[i]=iv-vc.begin()+1;
            vc[iv-vc.begin()]=arr[i];
        }
    }
    int sol[lis+1],temp=lis;
    for(int i=n;i>=1;i--){
        if(temp==LIS[i]){
            sol[temp--]=arr[i];
            cout<<arr[i]<<endl;
        }
    }
    for(int i=1;i<=lis;i++) cout<<sol[i]<<" ";
    return 0;
}
