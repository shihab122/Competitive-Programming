#include<bits/stdc++.h>

using namespace std;

int main(){
    int b,c;
    scanf("%d %d",&b,&c);
    string a;
    cin>>a;
    for(int i=0;i<c;i++){
        for(int j=0;j<a.size();j++){
            if(j<a.size()-1){
                if(a[j]=='B'&&a[j]!=a[j+1]) swap(a[j],a[j+1]),j++;
            }
        }
    }
    cout<<a<<endl;

    return 0;
}
