#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    string str;
    cin>>str;
    int o=0,d=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='o') o++;
        else d++;
    }
    if(o==0||d==0) cout<<"YES"<<endl;
    else if(d%o==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
