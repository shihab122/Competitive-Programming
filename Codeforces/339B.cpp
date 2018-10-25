#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    int x;
    scanf("%d",&x);
    int prev=x;
    long long sum=x-1;
    for(int i=1;i<m;i++){
        scanf("%d",&x);
        if(prev>x){
            sum+=(n-prev);
            sum+=(x-1)+1;
        }
        else if(prev<x){
            sum+=(x-prev);
        }
        prev=x;
    }
    cout<<sum<<endl;

    return 0;
}
