#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a=0,b=0;
    cin>>n;
    for(int i=0;i<n;i++){
        char t;
        cin>>t;
        if(t=='A') a++;
        else if(t=='B') b++;
    }
    if(a>b) cout<<"Anton"<<endl;
    else if(a<b) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}
