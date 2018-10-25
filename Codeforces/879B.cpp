#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,k,mx=0,j=0;
    scanf("%I64d%I64d",&n,&k);
    vector<long long>a,c;
    map<long long,int>x;
    for(long long i=0;i<n;i++){
        long long b;
        scanf("%I64d",&b);
        a.push_back(b);
        mx=max(b,mx);
    }
    if(k>=(n-1)){
        printf("%I64d\n",mx);
        return 0;
    }
    else{
        for(int i=0;i<n;i++){
            if(a[j]>a[i]){
                x[a[j]]++;
            }
            else if(a[j]<a[i]){
                x[a[i]]++;
                j=i;
            }
            if(x[a[j]]==k){
                printf("%I64d\n",a[j]);
                return 0;
            }
        }
    }
    printf("%I64d\n",mx);
    return 0;
}
