#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,t=0;
    cin>>n>>k;
    vector<int>a,b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    if(k==1){
        for(int i=0;i<a.size();i++){
            if(a[i]==0){
                a[i]=b[0];
                if(i!=0&&(a[i]<a[i-1])){
                cout<<"Yes"<<endl;
                return 0;
                }
            }
            else if(i!=0&&(a[i]<a[i-1])){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        cout<<"No"<<endl;
    }
    else
        cout<<"Yes"<<endl;
    return 0;
}
