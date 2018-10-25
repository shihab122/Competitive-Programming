#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(i==0&&a[i]=='9') continue;
        if(a[i]>'4') a[i]=(9-(a[i]-'0'))+'0';
    }
    cout<<a<<endl;


    return 0;
}
