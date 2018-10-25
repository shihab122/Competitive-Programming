#include<bits/stdc++.h>

using namespace std;

int main(){
    string n;
    int k,x=0;
    cin>>n>>k;
    for(int i=n.size()-1;i>=0;i--){
        if(k==0)
            break;
        else if(n[i]=='0')
            k--;
        else
            x++;
    }
    if(k==0)
        cout<<x<<endl;
    else
        cout<<n.size()-1<<endl;
    return 0;
}
