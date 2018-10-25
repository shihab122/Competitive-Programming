#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    for(int i=1;i<n;i++){
        int u,v;
        scanf("%d %d",&u,&v);
        arr[u]++;
        arr[v]++;
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(arr[i]==1) cnt++;
    }
    printf("%d\n",cnt);


    return 0;
}
