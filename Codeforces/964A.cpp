#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ii pair<int,int>
#define MP map<int,int>
using namespace std;

int main(){
    ll a;
    scanf("%lld",&a);
    ll b=a/2;
    ll cnt=b;
    for(int i=b+1;i<a;i++){
        if(a/i<=1) break;
        cnt++;
    }
    cnt++;
    printf("%lld\n",cnt);

    return 0;
}
