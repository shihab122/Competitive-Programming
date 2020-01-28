#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v(10,1);
    v.resize(15);
    //v.pop_back();
    int t=v.back();
    cout<<t<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<endl;

    return 0;
}
