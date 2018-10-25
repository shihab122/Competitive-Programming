#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,cnt=0,li;
    cin>>n>>m;
    vector<int>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++){
        int l,r,x;
        cnt=0;
        cin>>l>>r>>x;
        li=x-l;
        l--,r--,x--;
        for(int j=l;j<=r;j++){
            if(a[j]<a[x])
                cnt++;
        }
        if(cnt==li)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
