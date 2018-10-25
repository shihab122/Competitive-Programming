#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int n,m,k;
    vector<int>a;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        a.push_back(b);
    }
    int d=99999;
    for(int i=0;i<a.size();i++){
        if(a[i]==0)
            continue;
        else if(a[i]<=k&&((i+1)==m)){
            cout<<0<<endl;
            return 0;
        }
        else if(a[i]<=k){
            d=min((abs((i+1)-m)),d);
        }
    }
    cout<<d*10<<endl;
    return 0;
}
