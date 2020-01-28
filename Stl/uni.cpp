#include<bits/stdc++.h>
#define All(x) x.begin(),x.end()
#define Unique(c) (c).resize(unique(All(c)) -(c).begin())

using namespace std;

int main(){
    int a[]={1,2,2,3,3,4,4,5};
    vector<int> v(a,a+8);
    sort(v.begin(),v.end());
    v.resize(unique(v.begin(),v.end()) - v.begin());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}
