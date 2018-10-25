#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n<=10) cout<<0<<" "<<n<<endl;
        else cout<<n-10<<" "<<10<<endl;
    }

    return 0;
}
