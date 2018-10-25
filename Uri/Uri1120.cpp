#include<bits/stdc++.h>

using namespace std;

int main(){
    char D;
    string N;
    while(cin>>D>>N){
        int a=0;
    if(D=='0'&&N=="0")
        break;
    for(int i=0;i<N.size();i++){
        if(N[i]!=D){
            if(N[i]!='0'){
                cout<<N[i];
                a=1;
            }
            else if(a==1)
                cout<<N[i];
        }
    }
    if(a==0)
        cout<<0<<endl;
    else
        cout<<endl;
    }
    return 0;
}
