#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        a.push_back(b);
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    long long median=0;
    if(n%2==0){
        median=(a[(a.size()/2)]+a[(a.size()/2)-1])/2;
    }
    else
        median=a[(a.size()/2)];
    if(median==(sum/n)==2){
        cout<<"YES"<<endl;
        for(int i=0;i<4-n;i++)
    }
    return 0;
}
