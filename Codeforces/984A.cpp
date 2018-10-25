#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    sort(arr,arr+n+1);
    //for(int i=0;i<=n;i++) cout<<arr[i]<<endl;
    if(n%2 == 0) cout<<arr[n/2]<<endl;
    else{
        int ans = (n/2)+1;
        cout<<arr[ans]<<endl;
    }

    return 0;
}

