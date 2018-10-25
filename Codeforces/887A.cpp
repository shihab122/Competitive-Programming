#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string a;
    int cnt=0,f=0;
    cin>>a;
    if(a.size()<=6){
        cout<<"no"<<endl;
        return 0;
    }
    else{
        for(int i=0;i<a.size();i++){
            if(a[i]=='1'&&f==0){
                f++;
            }
            else if(a[i]=='0'&&f==1) cnt++;
        }
    }
    if(cnt>=6) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}
