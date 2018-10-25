#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,b=0,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        if(a<0) c+=a;
        else b+=a;
    }
    //cout<<b<<" "<<c<<endl;
    int x=b+abs(c);
    cout<<x<<endl;

    return 0;
}
