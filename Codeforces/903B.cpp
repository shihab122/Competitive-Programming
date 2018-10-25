#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,mx=0;
    scanf("%d",&n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        mp[a]++;
        mx=max(mx,mp[a]);
    }
    printf("%d\n",mx);

    return 0;
}
