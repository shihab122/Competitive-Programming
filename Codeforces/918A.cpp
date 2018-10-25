#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,f1=1,f2=1;
    cin>>n;
    string str="O";
    for(int i=2;i<=n;i++){
        if(f1+f2==i){
            str.append("O");
            int f=f1+f2;
            f1=f2;
            f2=f;
        }
        else str.append("o");
    }
    cout<<str<<endl;
    return 0;
}

