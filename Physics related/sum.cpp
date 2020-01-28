#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return 1;
    }
        else if(n==0){
                cout<<0<<endl;
            return 0;
        }
    else{
            int t=sum(n-1);
        return t;
        cout<< t<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=n;i<0;i--)
    sum(i);
}
