#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,c=0,d=0,sum=0,s=0;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0;i<n;i++){
        if(c%2==0&&a[i]=='S'){
            c++;
        }
        if(c%2==1&&a[i]=='F'){
            sum++;
            c++;
        }
        if(d%2==0&&a[i]=='F'){
            d++;
        }
        if(d%2==1&&a[i]=='S'){
            s++;
            d++;
        }
    }
    if(s>=sum) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
