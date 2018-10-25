#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n,a;
        long long sum=0;
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            if(a>=0) sum+=a;
        }
        printf("Case %d: %lld\n",i,sum);
    }
    return 0;
}
