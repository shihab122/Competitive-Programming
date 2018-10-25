#include "bits/stdc++.h"
#define ll long long
#define ld long double
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fld(i,a,b,c) for(ld i=a; i<b; i+=c)
#define fl(i,a,b,c) for(ll i=a; i<b; i+=c)
#define rfl(i,a,b,c) for(ll i=a; i>=b; i-=c)
#define endt (double)(clock() - tStart)/CLOCKS_PER_SEC
#define rep(i,n) fl(i,0,n,1)
#define rrep(i,n) rfl(i,n-1,0,1)
#define sas int tt; cin >> tt; rep(tc,tt)
#define pb  push_back
#define ep emplace_back
#define F first
#define S second
using namespace std;
const int md = 1e9 + 7;
const int MAX = 1e5 + 5;
const int MAXN = 1e6 + 5;
ld fun(ld a,ld b) {
    return (4*(a+b)*(a+b))/(a*b);
}
void solve() {
    sas {
        ll n; cin>>n;
        ll ans1=0,ans2=0,fl=0;
        vector <ll> v(n);
        rep(i,n) cin>>v[i];
        sort(all(v));
        ld mini=INT_MAX;
        rep(i,n-1) {
            if(v[i]==v[i+1] && i!=n-2) {
                ll j=i+2;
                while(v[j]!=v[j+1] && j<n-1) {
                    j++;
                } if(v[i]==v[j] && i<=n-4 && j<=n-2) {
                    fl=1; ans1=v[i],ans2=v[j];
                    break;
                } else if(v[j]==v[j+1] && i<=n-4 && j<=n-2){
                    if(fun((ld)v[j],(ld)v[i])<mini) {
                        mini=fun((ld)v[j],(ld)v[i]);
                        ans1=v[i],ans2=v[j];
                    }
                }
            } if(fl) break;
        }
        cout<<ans1<<" "<<ans1<<" "<<ans2<<" "<<ans2<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //clock_t tStart = clock();
    solve();
    //printf("\n%.6f\n", endt);
    return 0;
}
