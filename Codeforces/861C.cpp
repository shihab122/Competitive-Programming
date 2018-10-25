#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    int c=0,v=0;
    map<char,int>b;
    b['a']=1;
    b['e']=1;
    b['i']=1;
    b['o']=1;
    b['u']=1;
    for(int i=0;i<a.size();i++){
        if(b[a[i]]==1&&v==1){
            cout<<a<<endl;
            return 0;
        }
        if(i%3==0) v=0;
        if(b[a[i]]==1) v=1;
    }
    for(int i=0;i<a.size();i++){
        if()
    }
    return 0;
}
