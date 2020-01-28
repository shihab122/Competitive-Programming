#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    cin>>a;
    transform(a.begin()+3,a.end()-3,a.begin()+3,::toupper);
    cout<<a<<endl;

    return 0;
}
