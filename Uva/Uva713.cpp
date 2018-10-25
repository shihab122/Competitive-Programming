#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string a,b,e="",c,d;
        cin>>a>>b;
        int mx=max(a.size(),b.size());
        int j=0,y=0,flag=0;
        if(mx==a.size())
            c=a,d=b;
        else
            c=b,d=a;
        for(int i=0;i<mx;i++){
            if(j<d.size()){
                y+=(c[i]-'0')+(d[j]-'0');
                e.push_back((y%10)+'0');
                y/=10;
                j++;
            }
            else{
                y+=(c[i]-'0');
                e.push_back((y%10)+'0');
                y/=10;
            }
        }
        if(y==1)
            e.push_back(y+'0');
        for(int i=0;i<e.size();i++){
            if(flag==0&&e[i]=='0') continue;
            else flag=1,cout<<e[i];
        }
        cout<<endl;
    }
    return 0;
}
