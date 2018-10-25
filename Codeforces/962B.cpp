#include<bits/stdc++.h>
#define F first
#define S second
#define ii pair<int,int>
#define iii pair<long long,long long>

using namespace std;
typedef long long ll;


int main(){
    int n,a,b,flag=0;
    ll ans=0;
    scanf("%d %d %d",&n,&a,&b);
    string str;
    cin>>str;
    int mx=max(a,b);
    int mn=min(a,b);
    for(int i=0;i<str.size();i++){
        if(mn<=0&&mx<=0) break;
        if(str[i]=='*'){
            int cx=max(mx,mn);
            int cy=min(mn,mx);
            mx=cx;
            mn=cy;
            flag=0;
        }
        else if(flag==1){
            flag=0;
            if(mn>0)ans++;
            mn--;
        }
        else{
            flag=1;
            if(mx>0)ans++;
            mx--;
        }
    }

    printf("%lld\n",ans);
    return 0;
}
