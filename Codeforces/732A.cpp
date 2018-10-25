#include<bits/stdc++.h>

using namespace std;

int main(){
    int l,r;
    cin>>l>>r;
    for(long long i=1;;i++){
        if((l*i)%10==0||((l*i)-r)%10==0){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
