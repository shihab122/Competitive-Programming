#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>a,b;
    int n,c,i=0,j=0;
    cin>>n;
    c=n;
    while(n--){
        int b;
        cin>>b;
        a.push_back(b);
    }
    while(c--){
        int d;
        cin>>d;
        b.push_back(d);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    while(i!=a.size()&&j!=b.size()){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else if(a[i]>b[j])
            j++;
        else
            i++;
    }

    return 0;
}
