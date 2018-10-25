#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,e=0;
    long long sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        sum+=x;
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int l,r;
        scanf("%d%d",&l,&r);
        if(sum<=l&&!e){
            e=1;
            sum=l;
        }
        else if(sum<=r&&!e){
            e=1;
        }
    }
    if(!e&&n)
        cout<<-1<<endl;
    else
        cout<<sum<<endl;
    return 0;
}
