#include<bits/stdc++.h>

using namespace std;

int main(){
    long long amount=0;
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        string str;
        cin>>str;
        if(str=="donate"){
            int b;
            scanf("%d",&b);
            amount+=b;
        }
        else cout<<amount<<endl;
    }

    return 0;
}
