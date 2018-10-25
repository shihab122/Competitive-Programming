#include<bits/stdc++.h>

using namespace std;

int main(){
    map<char,int>s;
    string a;
    cin>>a;
    int b,c=0,d;
    cin>>b;
    if(a.size()<b){
        cout<<"impossible"<<endl;
        return 0;
    }
    for(int i=0;i<a.size();i++){
        if(s[a[i]]!=2){
            c++;
            s[a[i]]=2;
        }
    }
    if(c>=b) cout<<0<<endl;
    else{
        cout<<abs(c-b)<<endl;
    }
    return 0;
}
