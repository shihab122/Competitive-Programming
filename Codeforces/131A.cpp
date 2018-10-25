#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    for(int i=1;i<a.size();i++){
        if(a[i]>='a'&&a[i]<='z'){
            cout<<a<<endl;
            return 0;
        }
    }
    for(int i=0;i<a.size();i++)
        a[i]^=32;
    cout<<a<<endl;
    return 0;
}
