#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,l=0,z=0,o=0,mx,z1=0,o1=0;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
        if(arr[i]==0) z++,l=0;
        else o++,l++;
    }
    mx=z+l;
    mx=max(mx,o);
    //cout<<o<<endl;
    for(int i=0;i<a;i++){
        if(arr[i]==0) z1++;
        else o1++;
        int ans=z1+(o-o1);
        mx=max(mx,ans);
    }
    cout<<mx<<endl;
    return 0;
}
