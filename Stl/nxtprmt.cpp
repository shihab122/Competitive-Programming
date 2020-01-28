#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    cout<<a<<endl;
    while(next_permutation(a.begin(),a.end()))
        cout<<a<<endl;

    return 0;
}
