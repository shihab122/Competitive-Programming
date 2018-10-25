#include<bits/stdc++.h>

using namespace std;

int main(){
//    freopen("in.txt","w",stdout);
    int n;
    scanf("%d",&n);
    while(n--){
        int x=0,y=0;
        string a;
        cin>>a;
        if(a.size()>3) cout<<3<<endl;
        else{
            if(a[0]=='o') x++;
            if(a[1]=='n') x++;
            if(a[2]=='e') x++;
            if(a[0]=='t') y++;
            if(a[1]=='w') y++;
            if(a[2]=='o') y++;
            if(x>y) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    return 0;
}
