#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    while(cin>>a){
        if(a == "#") break;
        if(next_permutation(a.begin(), a.end()))
            cout<<a<<endl;
        else cout<<"No Successor"<<endl;
    }

    return 0;
}
