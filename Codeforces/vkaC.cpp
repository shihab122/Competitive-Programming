#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    string a[n+1];
    for(int i=1;i<=n;i++){
        a[i]="Aa";
        a[i][0]+=i/26;
        a[i][1]+=i%26;
    }
    for(int i=1;i<=n-k+1;i++){
        string s;
        cin>>s;
        if(s=="NO")
            a[i+k-1]=a[i];
    }
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
