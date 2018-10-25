#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    if(n==1){
        if(a[0]=='1'){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
        return 0;
    }
    for(int i=0;i<n;i++){
        if(i>=0&&a[i]=='1'&&a[i]==a[i-1]){
            printf("No\n");
            return 0;
        }
    }
    if(a[0]=='0'&&a[0]==a[1]){
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=1;i<n-1;i++){
        if(a[i]=='0'&&a[i]==a[i-1]&&a[i]==a[i+1]){
            printf("No\n");
            return 0;
        }
    }
    if(a[n-1]=='0'&&a[n-1]==a[n-2]){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;

    return 0;
}
