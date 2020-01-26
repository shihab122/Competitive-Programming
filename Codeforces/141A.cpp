#include<bits/stdc++.h>

using namespace std;

int main(){
    string a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
    a += b;
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    //cout<<a<<" "<<c<<endl;
    if(a != c) printf("NO\n");
    else printf("YES\n");

    return 0;
}
