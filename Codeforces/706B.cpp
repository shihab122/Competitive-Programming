#include<bits/stdc++.h>

#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define db double
#define szz(x) (int)(x).size()
#define S second
#define F first
#define pb push_back()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
#define ll long long
#define ull unsigned long long
#define ldb long double
#define memo(a,b) memset(a,b,sizeof(a))
using namespace std;

void R(int &x) { scanf("%d", &x); }
void R(int64_t &x) { scanf("%lld", &x); }
void R(double &x) { scanf("%lf", &x); }

void W(const int &x) { printf("%d\n", x); }
void W(const int64_t &x) { printf("%lld", x); }
void W(const double &x) { printf("%.16f", x); }
void W(const char &x) { putchar(x); }
void W(const char *x) { printf("%s", x); }


typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <ll, int> pli;
typedef pair <db, db> pdd;
typedef vector<int> VI;

int IT_MAX = 1 << 18;
int imx = INT_MAX;
int mod = 1000000007;
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db ERR = 1e-10;

ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}

int main(){
    int n;
    R(n);
    vector<pii>vc(n);
    forn(i, n){
        R(vc[i].F);
        vc[i].S = i + 1;
    }
    sort(all(vc));
    int q;
    R(q);
    forn(i, q){
        int x, y = 0;
        R(x);
        int lo = 0, hi = n;
        while(lo <= hi){
            int mid = (lo + hi) / 2;
            if(vc[mid].F < x) lo = mid + 1;
            else hi = mid - 1;
            if(vc[mid].F == x) y = 1;
        }
        if(y == 1) W(vc[lo].S);
        else W(0);

    }

    #ifdef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
    return 0;
}

