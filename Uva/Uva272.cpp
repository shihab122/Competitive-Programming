#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[10000];
    int coun=0;
    while(gets(s)){
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='"'){
             coun=coun+1;
                if(coun%2==1)
                    cout<<"``";
                else
                    cout<<"''";
        }
        else
            cout<<s[i];
    }
        cout<<endl;
    }
    return 0;
}
