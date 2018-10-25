#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int a;
    while(cin>>a){
        a--;
        cout<<str[a]<<endl;
    }
    return 0;
}
