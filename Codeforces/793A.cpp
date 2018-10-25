#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,k,sum=0,c;
    cin>>n>>k;
    vector<long long>a(n);
    vector<long long>::iterator it;
    for(int i=0;i<n;i++){
        long long b;
        cin>>b;
        a[i]=b;
    }
    it=min_element(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if((a[i]-*it)%k==0)
            sum+=(a[i]-*it)/k;
        else{
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<sum<<endl;
    return 0;
}
