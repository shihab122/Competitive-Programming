#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,d;
    cin>>n;
    int w[n];
    vector <int> v;
    for(int i=0;i<n;i++)
        cin>>w[i];
    for(int i=0;i<n;i++){
        if(w[i]<w[i-1]){
           d=w[i-1]-w[i];
           v.push_back(d);
        }
        else{
           d=w[i]-w[i-1];
           v.push_back(d);
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
    return 0;
}
