#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
        scanf("%d",&n);
        int arr[n+1];
        for(int j=0;j<n;j++) scanf("%d",&arr[j]);
        //sort(arr,arr+n);
        int k=n/2;
        printf("Case %d: %d\n",i,arr[k]);
    }

    return 0;
}
