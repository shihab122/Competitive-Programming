#include<bits/stdc++.h>

using namespace std;
int main(){
    string name;
    cin>>name;
    int a=1;
    for(int i=0;i<=name.size()/2;i++){
        if(name[i]!=name[name.size()-i-1]){
            cout<<name<<" is not a palindrome!!"<<endl;
            a=0;
            break;
        }

    }
    if(a){
        cout<<name<<" is a palindrome!!"<<endl;
    }

    return 0;
}
