#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int a,mx = 0,mn=200,in1,in2;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(mx<arr[i]) mx = arr[i],in1 = i;
        if(mn>=arr[i]) mn = arr[i],in2 = i;
    }
    //cout<<in1<<" "<<in2<<endl;
    if(in1 >= in2 || in2 <= in1) cout<<abs(1-in1)+abs(n-in2)-1<<endl;
    else cout<<abs(1-in1)+abs(n-in2)<<endl;


    return 0;
}
