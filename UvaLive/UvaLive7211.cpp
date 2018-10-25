#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    while(cin>>t){
        int ans= 0;
        int a;
        for(int i=0;i<5;i++){
            cin>>a;
            if(t == a) ans++;
        }
        cout<<ans<<endl;
    }


    return 0;
}
