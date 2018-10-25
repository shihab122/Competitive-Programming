#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int x=0;
    for(int i=0;i<n;i++){
        string ans;
        cin>>ans;
        if(ans[0]=='+') x++;
        else if(ans[0]=='-') x--;
        else{
            if(ans[1]=='+') x++;
            else if(ans[1]=='-') x--;
        }
    }
    cout<<x<<endl;
    return 0;
}
