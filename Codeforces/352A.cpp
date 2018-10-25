#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],res=0,res2=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==5) sum+=arr[i],res++;
    }
    if(n==res) printf("-1\n");
    else if(res==0) printf("0\n");
    else{
        for(int i=1;i<=(res-res%9);i++) cout<<5;
        for(int i=1;i<=n-res;i++) cout<<0;
        cout<<endl;
    }

    return 0;
}
