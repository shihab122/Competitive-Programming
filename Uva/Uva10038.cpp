#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n){
    int m=1;
    vector<int>a,c;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        a.push_back(b);
    }
    for(int i=1;i<n;i++){
        c.push_back(abs(a[i]-a[i-1]));
    }
    int l=1;
    sort(c.begin(),c.end());
    for(int i=0;i<c.size();i++){
        if(c[i]!=l){
            m=0;
            break;
        }
        l++;
    }
    if(m==1)
        cout<<"Jolly"<<endl;
    else
        cout<<"Not jolly"<<endl;
        }
    return 0;
}
