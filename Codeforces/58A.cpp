#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    string res="hello";
    int n=0,j=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==res[j]){
            n++;
            j++;
        }
    }
    if(n==res.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
