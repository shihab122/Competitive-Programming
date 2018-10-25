#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int d;
    scanf("%d",&d);
    string a,ans,ans1;
    cin>>a;
    int cnt=0;
    for(int i=1;i<d-1;i++){
        if(a[i]!='?'){
            if(a[i]==a[i+1]||a[i]==a[i-1]){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    for(int i=0;i<d;i++){
        if(a[i]=='?'){
            if(i==0||i==(d-1)){
                cnt=1;
                break;
            }
            else if(a[i-1]==a[i]||a[i+1]==a[i]||a[i-1]==a[i+1]){
                cnt=1;
                break;
            }
        }
    }
    if(cnt==0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}
