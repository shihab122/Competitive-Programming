#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int v1,v2,v3,v4;
    cin>>v1>>v2>>v3>>v4;
    int s1,s2,s3;
    s1=v1*2,s2=v2*2,s3=v3*2;
    if(v3>=v4&&v4<v2){
        cout<<v1*2<<endl;
        cout<<v2*2<<endl;
        cout<<v3<<endl;
    }
    else if(s3>=v4&&s2>s3){
        cout<<s1<<endl;
        cout<<s2<<endl;
        cout<<s3<<endl;
    }
    else cout<<-1<<endl;

    return 0;
}
