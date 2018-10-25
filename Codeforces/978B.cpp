#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    scanf("%d",&n);
    string a;
    cin>>a;
    for(int i=0;i<n-2;i++){
        string sy=a.substr(i,3);
        //cout<<sy<<endl;
        if(sy=="xxx") cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
