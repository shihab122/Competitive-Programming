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

void W(const int &x) { printf("%d", x); }
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
    ll n, q;
    R(n);
    R(q);
    while(q--){
        ll a, b;
        R(a);R(b);
        if(n % 2 == 0){
            ll x = a + b;
            if(x % 2 == 0){
                ll y = (a - 1) * (n / 2);
                ll z;
                if((a + 1) % 2 == 0) z = abs((a + 1) - x) / 2;
                else  z = abs((a + 2) - x) / 2;
                z++;
                y += z;
                printf("%lld\n", y);
            }
            else{
                ll y = (a - 1) * (n / 2);
                y += (n * n) / 2;
                ll z;
                if((a + 1) % 2 != 0) z = abs((a + 1) - x) / 2;
                else  z = abs((a + 2) - x) / 2;
                z++;
                y += z;
                printf("%lld\n", y);

            }
        }
        else{
            ll mn = ((n * n) / 2) + 1;
            ll u = ((a - 1) / 2) + ((a -1) % 2);
            ll v = ((a - 1) / 2);
            ll y;
            ll x = a + b;
            if(x % 2 == 0){
                ll z;
                ll yt = (n % 2) + (n / 2);
                if((a + 1) % 2 == 0) z = abs((a + 1) - x) / 2;
                else  z = abs((a + 2) - x) / 2;
                y = (u * yt) + (v * (n / 2)) + z;
                y++;
            }
            else{
                ll z;
                ll yt = (n % 2) + (n / 2);
                if((a + 1) % 2 != 0) z = abs((a + 1) - x) / 2;
                else  z = abs((a + 2) - x) / 2;
                y = mn + (u * (n / 2)) + (v * yt) + z;
                y++;
            }
            printf("%lld\n", y);
        }
    }


    #ifdef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
    return 0;
}


