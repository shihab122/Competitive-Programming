#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int x=0;
    for(long long i=0;i<b.size();i++){
        if(b[i]==' ')
            continue;
        else if(x==1)
            break;
        else{
            for(long long j=0;j<a.size();j++){
                if(a[j]==b[i]){
                    a[j]=' ';
                    break;
                }
                else if((a[j]!=b[i])&&(a.size()==(j+1))){
                    x=1;
                    break;
                }
            }
        }
    }
    if(x==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
