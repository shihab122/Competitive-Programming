#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long>m;
    long long a,b;
    for(int i=0;i<n;i++){
        cin>>a;
        m.push_back(a);
    }
    sort(m.begin(),m.end());
    b=abs(m[0]-m[1]);
    long long c=0;
    for(int i=0;i<m.size()-1;i++){
        if(abs(m[i]-m[i+1])<b){
            b=abs(m[i]-m[i+1]);
            c=1;
        }
        else if(abs(m[i]-m[i+1])==b)
            c++;
    }
    cout<<b<<" "<<c<<endl;
    return 0;
}
