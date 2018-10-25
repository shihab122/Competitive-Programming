#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    string b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
        char ch=tolower(a[i]);
        char ch1=tolower(b[i]);
        if(ch<ch1){
            printf("-1\n");
            return 0;
        }
        else if(ch>ch1){
            printf("1\n");
            return 0;
        }
    }
    cout<<0<<endl;

    return 0;
}
