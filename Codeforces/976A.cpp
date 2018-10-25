#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define MP make_pair
using namespace std;


int main(){
    int n,flag=0;
    scanf("%d",&n);
    string a;
    cin>>a;
    for(int i=0;i<n;i++){
        if(a[i]=='1'&&i==0) cout<<a[i];
        else if(a[i]=='0') cout<<a[i];
    }
    cout<<endl;

    return 0;
}

