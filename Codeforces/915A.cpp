#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,mn=101;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        if(b%x==0){
            int y=b/x;
            mn=min(mn,y);
        }
    }
    cout<<mn<<endl;
    return 0;
}
