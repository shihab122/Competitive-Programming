#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,c;
        //freopen("input.txt","w",stdout);
    while(scanf("%d%d%d%d",&n,&a,&b,&c),(n||a||b||c)){
        int sum=1080,e=0;
        e=n-a;
        if(e<0) e=e+40;
        sum+=e*9;
        e=b-a;
        if(e<0) e+=40;
        sum+=e*9;
        e=b-c;
        if(e<0) e=e+40;
        sum+=e*9;
        cout<<sum<<endl;
    }
    return 0;
}
