#include<bits/stdc++.h>

using namespace std;

int main(){
    int flag=0;
    string a;
    while(cin>>a){
        if(a=="42") flag=1;
        if(flag==0){
            if(a.size()<=2) cout<<a<<endl;
        }
    }

    return 0;
}
