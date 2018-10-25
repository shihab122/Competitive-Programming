#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    long long f=0,f1=0,f2=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='(') f1++;
        else if(a[i]==')'&&(f2<f1)) f2++;
    }
    f=min(f1,f2);
    f*=2;
    printf("%lld\n",f);
    return 0;
}
