#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int n,t=0,j=0;
    cin>>n;
    vector<int>a,b;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(x>y||x<y)
            t=1;
        a.push_back(x);
    }
    if(t==1){
        cout<<"rated"<<endl;
    }
    else{
        b=a;
        sort(b.begin(),b.end());
    for(int i=b.size()-1;i>=0;i--){
        if(a[j]!=b[i]){
            t=0;
            break;
        }
        else
            t=1,j++;
    }
        if(t==1)
            cout<<"maybe"<<endl;
        else
            cout<<"unrated"<<endl;
    }
    return 0;
}
