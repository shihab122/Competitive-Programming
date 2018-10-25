#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(1);
    long long r=0;
    for(long long i=0;i<n-2&&a.size()<k;i++){
        int t=0;
        r=a.size()+1;
        a.push_back(r);
        for(int j=0;j<a.size()-1;j++){
            a.push_back(a[j]);
            t++;
        }
        t++;
    }
}
