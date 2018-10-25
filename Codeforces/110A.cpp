#include<bits/stdc++.h>

using namespace std;

bool ok(int x){
    while(x > 0){
        if(x != 4 && x != 7) return false;
        x /= 10;
    }
    return true;
}

int main(){
    string a;
    cin>>a;
    int cnt = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '4' || a[i] == '7'){
            cnt++;
        }
    }
    if(ok(cnt) && cnt != 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
