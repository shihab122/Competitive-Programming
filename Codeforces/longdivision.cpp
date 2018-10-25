#include<bits/stdc++.h>

using namespace std;

string findiv(string a,int b){
    string ans;
    int inde=0;
    int temp=a[inde]-'0';

    while((temp<b)&&(a.size()>inde)) temp=(temp*10)+(a[++inde]-'0');

    while(a.size()>inde){
        ans+=(temp/b)+'0';
        temp=(temp%b)*10+(a[++inde]-'0');
    }
    return ans;

}

int main(){
    string a;
    cin>>a;
    int b;
    cin>>b;
    cout<<findiv(a,b)<<endl;
    return 0;
}
