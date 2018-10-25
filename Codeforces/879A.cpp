#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,mx=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        for(int j=0;;j+=b){
            if((a+j)>mx){
                mx=a+j;
                break;
            }
        }
    }
    cout<<mx<<endl;
    return 0;
}
