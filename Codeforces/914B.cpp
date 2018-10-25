#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,mx=0,mx2=0;
    scanf("%d",&x);
    map<int,int>mp;
    map<int,int>::iterator it;
    for(int i=0;i<x;i++){
        int a;
        scanf("%d",&a);
        mp[a]++;
        mx=max(mx,a);
    }
    int y=mp[mx];
    if(y==1){
        printf("Conan\n");
        return 0;
    }
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second%2!=0) mx2++;
    }
    if(mx2>0) printf("Conan\n");
    else printf("Agasa\n");
    return 0;
}
