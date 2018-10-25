#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,m,k;
    scanf("%I64d%I64d%I64d",&n,&m,&k);

    vector<long long>y,z(n+1),a(n+1);
    //memset(a,0,sizeof(a));
    for(long long i=0;i<n+1;i++)
        a[i]=0,z[i]=0;
    for(long long i=0;i<m;i++){
        long long b;
        scanf("%I64d",&b);
        a[b]=1;
    }
    long long e=0,u=0;
    for(long long i=0;i<k;i++){
        long long r,t;
        scanf("%I64d%I64d",&r,&t);
        y.push_back(r);
        z[r]=t;
        u=t;
    }
    sort(y.begin(),y.end());
    long long pos=y[0];
    long long j=0;
    while(j<y.size()){
        if(a[pos]==1){
            cout<<pos<<endl;
            return 0;
        }
        else if(a[z[pos]]==1){
            cout<<z[pos]<<endl;
            return 0;
        }
        else{
                j++;
            if(z[pos]!=0){
                pos=z[pos];
            }
            else{
                cout<<pos<<endl;
                return 0;
            }
        }
    }
    printf("%I64d\n",u);
    return 0;
}
