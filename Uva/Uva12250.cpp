#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("in.txt","w",stdout);
    string a;
    int c=0;
    while(cin>>a){
        if(a=="#") break;
        else if(a=="HELLO") cout<<"Case "<<++c<<": ENGLISH"<<endl;
        else if(a=="HOLA") cout<<"Case "<<++c<<": SPANISH"<<endl;
        else if(a=="HALLO") cout<<"Case "<<++c<<": GERMAN"<<endl;
        else if(a=="BONJOUR") cout<<"Case "<<++c<<": FRENCH"<<endl;
        else if(a=="CIAO") cout<<"Case "<<++c<<": ITALIAN"<<endl;
        else if(a=="ZDRAVSTVUJTE") cout<<"Case "<<++c<<": RUSSIAN"<<endl;
        else cout<<"Case "<<++c<<": UNKNOWN"<<endl;
    }
    return 0;
}
