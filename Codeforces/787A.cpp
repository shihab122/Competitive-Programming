#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    map<long long,int>e;
    vector<long long>f;
    for(int i=0;i<100;i++){
        e[(b+(a*i))]=100;
    }
    for(int i=0;i<100;i++){
        if(e[(d+(c*i))]==100){
            cout<<(d+(c*i))<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
