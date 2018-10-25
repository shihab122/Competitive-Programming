#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=1;
    scanf("%d",&n);
    long long b[n+1];
    b[0]=0;
    for(int k=1;k<=n;k++){
        int a;
        scanf("%d",&a);
        b[k]=a;
//        cout<<a<<endl;
    }
    int i=n;
    long long c=(i-b[i]);
    for(long long j=n-1;j>0;j--){
        long long d=j-b[j];
        if(j<c){
            cnt++;
         }
            c=min(c,d);
//        cout<<c<<" "<<j<<endl;
    }
    printf("%d\n",cnt);

    return 0;
}
