#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define MP make_pair
using namespace std;


int main(){

    ll n,m;
    scanf("%lld %lld",&n,&m);
    ll k;
    scanf("%lld",&k);
    if(k < n) printf("%lld 1\n",k+1);
    else{
        ll mov = k-n;
        ll ar = mov / (m-1);
        ll ac = mov % (m-1);
        if(ar%2==0){
            ac += 2;
        }
        else{
            ac = m-ac;
        }
        ar = n-ar;

        printf("%lld %lld\n",ar,ac);

    }

    return 0;
}

