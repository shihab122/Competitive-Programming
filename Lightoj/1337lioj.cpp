/*{{{*/
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<iostream>
#include<sstream>
#include<set>
#include<map>
#include<queue>
#include<bitset>
#include<vector>
#include<limits.h>
#include<assert.h>
#define SZ(X) ((int)(X).size())
#define ALL(X) (X).begin(), (X).end()
#define REP(I, N) for (int I = 0; I < (N); ++I)
#define REPP(I, A, B) for (int I = (A); I < (B); ++I)
#define FOR(I, A, B) for (int I = (A); I <= (B); ++I)
#define FORS(I, S) for (int I = 0; S[I]; ++I)
#define RS(X) scanf("%s", (X))
#define SORT_UNIQUE(c) (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define GET_POS(c,x) (lower_bound(c.begin(),c.end(),x)-c.begin())
#define CASET int ___T; scanf("%d", &___T); for(int cs=1;cs<=___T;cs++)
#define MP make_pair
#define PB push_back
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define LEN(X) strlen(X)
#define F first
#define S second
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<PII> VPII;
typedef pair<LL,LL> PLL;
typedef vector<PLL> VPLL;
template<class T> void _R(T &x) { cin >> x; }
void _R(int &x) { scanf("%d", &x); }
void _R(LL &x) { scanf("%lld", &x); }
void _R(double &x) { scanf("%lf", &x); }
void _R(char &x) { scanf(" %c", &x); }
void _R(char *x) { scanf("%s", x); }
void R() {}
template<class T, class... U> void R(T &head, U &... tail) { _R(head); R(tail...); }
template<class T> void _W(const T &x) { cout << x; }
void _W(const int &x) { printf("%d\n", x); }
void _W(const LL &x) { printf("%lld\n", x); }
void _W(const double &x) { printf("%.16f", x); }
void _W(const char &x) { putchar(x); }
void _W(const char *x) { printf("%s", x); }
template<class T,class U> void _W(const pair<T,U> &x) {_W(x.F); putchar(' '); _W(x.S);}
void W() {}
template<class T, class... U> void W(const T &head, const U &... tail) { _W(head); putchar(sizeof...(tail) ? ' ' : '\n'); W(tail...); }
#ifdef HOME
 #define DEBUG(...) {printf("# ");printf(__VA_ARGS__);puts("");}
#else
 #define DEBUG(...)
#endif
int MOD = 1e9+7;
void ADD(LL& x,LL v){x=(x+v)%MOD;if(x<0)x+=MOD;}
/*}}}*/
const int SIZE = 503;
bool visit[SIZE][SIZE];
int matrix[SIZE][SIZE];
vector<string> vc;
string s;

void clear(){
    FOR(i, 0, 502){
        s += '#';
        FOR(j, 0, 502){
            visit[i][j] = false;
            matrix[i][j] = 0;
        }
    }
}

int dfs(int x, int y){
    if(visit[x][y]) return 0;
    else{
        visit[x][y] = true;
        if(vc[x][y] == 'C'){
            matrix[x][y] += 1 + dfs(x + 1, y) + dfs(x, y + 1) + dfs(x, y - 1) + dfs(x - 1, y);
        }
        else if(vc[x][y] == '.'){
            matrix[x][y] += dfs(x + 1, y) + dfs(x, y + 1) + dfs(x, y - 1) + dfs(x - 1, y);
        }
        return matrix[x][y];
    }

}

int main(){
    freopen("in.txt", "w", stdout);
    int t;
    _R(t);
    FOR(tes, 1, t){
        int m, n, q;
        _R(m),_R(n),_R(q);
        vc.clear();
        clear();
        vc.push_back(s);
        REP(i, m){
            string t;
            cin>>t;
            t = '#' + t + '#';
            vc.push_back(t);
        }
        vc.push_back(s);
        printf("Case %d:\n", tes);
        while(q--){
            int x, y;
            _R(x), _R(y);
            if(visit[x][y] == false){
                int ans = dfs(x, y);
                _W(ans);
                FOR(i, 1, n){
                    FOR(j, 1, n){
                        if(visit[x][y]) matrix[x][y] = ans;
                        if(visit[x][y] && matrix[x][y] > ans) _W("here");
                    }
                }
            }
            else _W(matrix[x][y]);
        }
    }
    return 0;
}

