#include<iostream>

using namespace std;
int main(){
    int s;
    cin>>s;
    cout<<s/365<<" ano(s)"<<endl;
    s=s%365;
    cout<<s/30<<" mes(es)"<<"\n"<<s%30<<" dia(s)"<<endl;
    return 0;

}
