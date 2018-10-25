#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,c;
    cin>>a;
    int flag = 1,i = 0;
    for(i=0;i<a.size()-4;i++){
        cout<<"yes"<<endl;
        c = a.substr(i,3);
        if(c=="WUB"){
            if(flag==0) cout<<" ";
            i+=2;
        }
        else cout<<a[i],flag = 0;
    }
    c = "";
    for(int j = i;j<a.size();j++) c += a[j];
    if(c!="WUB")cout<<c;
    cout<<endl;

    return 0;
}
