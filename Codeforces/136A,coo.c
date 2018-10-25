#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    map<int,int>mp;
    for(int i = 1;i <= n;i++){
        int a;
        scanf("%d",&a);
        mp[a] = i;
    }

    for(int i = 1;i <= n;i++) printf("%d ",mp[i]);
    printf("\n");

    return 0;
}
