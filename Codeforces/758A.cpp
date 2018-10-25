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
    sort(a.begin(),a.end());
    int mx=a[n-1];
    int sum=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==mx)
            continue;
        else
            sum+=mx-a[i];
    }
    cout<<sum<<endl;
}
