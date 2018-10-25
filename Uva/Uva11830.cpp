#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    while(cin>>a>>b){
        if(a=="0"&&b=="0")
            break;
        string c;
        int sum=0,j=0;
        for(int i=0;i<b.size();i++){
            if(b[i]!=a[0])
                c.push_back(b[i]);
        }
        for(int i=0;i<c.size();i++){
            sum+=c[i]-'0';
            j=i;
            if(sum>0)
                break;
        }
        for(int i=j;i<c.size();i++)
            cout<<c[i];
        if(c.size()!=0)
         cout<<endl;
         else
            cout<<0<<endl;
    }
    return 0;
}
