#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){
    ll a;
    cin>>a;
    if(a%10<=5) {
        a/=10;
        a*=10;
    }
    else {
        a/=10;
        a+=1;
        a*=10;
    }
    cout<<a<<endl;

    return 0;
}
