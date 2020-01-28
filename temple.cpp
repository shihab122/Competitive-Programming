#include <iostream>
#include <cmath>
using namespace std;
void check(string s,int n)
{
    for(int j=0;j<n/2;j++)
    {
        if((s[j]=='a'&&s[n-j-1]=='z')||
            (s[j]=='z'&&s[n-j-1]=='a'))
        {
            cout<<"NO"<<endl;
            return;
        }
        else if(abs(s[j]-s[n-j-1])!=2&&abs(s[j]-s[n-j-1])!=0)
        {
            cout<<"NO"<<endl;
            return;
        }

    }
    cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        string s;
        cin>>n>>s;
        check(s,n);
    }
}
