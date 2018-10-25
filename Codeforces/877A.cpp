#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    int cnt=0;
    string a;
    cin>>a;
    string x[5]={"Danil","Olya","Slava","Ann","Nikita"};
    for(int i=0;i<a.size();i++){
        for(int j=0;j<5;j++){
            if(a.substr(i,x[j].size())==x[j]){
                cnt++;
                i+=x[j].size()-1;
                break;
            }
        }
    }
    if(cnt==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
