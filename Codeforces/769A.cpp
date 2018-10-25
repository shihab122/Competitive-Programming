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
    if(n==1){
        cout<<a[0]<<endl;
    }
    else{
        sort(a.begin(),a.end());
        int mx=(a.size()/2)+(a.size()%2);
        cout<<a[mx-1]<<endl;
    }
    return 0;
}
