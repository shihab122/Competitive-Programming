#include<iostream>
using namespace std;
int main()
{
    int a,b,res=0;
    cin>>a;
    while (a) {res=a*10-a%10;a/=10;}
    cout<<res;
    return 0;
}
