#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,l=0;
    long long t=0;
    cin>>n>>a>>b;
    vector<int>u;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        u.push_back(x);
    }
    for(int i=0;i<u.size();i++){
        if(u[i]==1&&a>0)
            a--;
        else if(u[i]==1&&b>0){
            b--;
            l++;
        }
        else if(u[i]==2&&b>0)
            b--;
        else if(u[i]==1&&l>0)
            l--;
        else
            t+=u[i];
    }
    cout<<t<<endl;
    return 0;
}
